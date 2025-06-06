/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:17:17 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 20:08:54 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("no name"), _signed(0), _sign(100), _execute(50) {}

AForm::AForm(const std::string &name, int sign, int execute) : _name(name), _signed(0), _sign(sign), _execute(execute)
{
	if (sign < 1 || execute < 1)
		throw GradeTooHighException();
	if (sign > 150 || execute > 150)
		throw GradeTooLowException(0);
}

AForm::AForm(const AForm &t) : _name(t.getName()), _signed(t.getSigned()), _sign(t.getSign()), _execute(t.getExecute()) {}

AForm	&AForm::operator=(const AForm &t)
{
	if (this != &t)
		_signed = t.getSigned();
	return (*this);
}

AForm::~AForm() {}

const std::string	&AForm::getName() const { return (_name); }

bool	AForm::getSigned() const { return (_signed); }

int	AForm::getSign() const { return (_sign); }

int	AForm::getExecute() const { return (_execute); }

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("The grade wanted is too high, please choose another over or equals to 1\n");
}

AForm::GradeTooLowException::GradeTooLowException(int i)
{
	if (i == 0)
		_error = "The grade wanted is too low, please choose another under or equals to 150\n";
	if (i == 1)
		_error = "Grade too low to sign.\n";
	if (i == 2)
		_error = "Grade too low to execute\n";
}

AForm::GradeTooLowException::~GradeTooLowException() throw() {}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("Form not signed\n");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return (_error.c_str());
}

bool	AForm::beSigned(const Bureaucrat &t)
{
	if (t.getGrade() > _sign)
		throw GradeTooLowException(1);
	if (_signed)
		return (1);
	_signed = 1;
	return (0);
}

std::ostream &operator<<(std::ostream &ost, const AForm &t)
{
	ost << t.getName() << ", requiring grade " << t.getSign() << " to be signed and grade " << t.getExecute() << " to be executed has ";
	if (t.getSigned())
		ost << "already ";
	else
		ost << "not ";
	ost << "been signed.\n";
	return (ost);
}

void AForm::toExecute(const Bureaucrat & t) const
{
	std::cout << " Nothing happens to " << t.getName() << ".\n";
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _execute)
		throw GradeTooLowException(1);
	if (!_signed)
		throw FormNotSigned();
	toExecute(executor);
}

void	AForm::setSigned(bool num) { _signed = num; }
