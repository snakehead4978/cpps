/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:17:17 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 20:08:54 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("no name"), _signed(0), _sign(100), _execute(50) {}

Form::Form(const std::string &name, int sign, int execute) : _name(name), _signed(0), _sign(sign), _execute(execute)
{
	if (sign < 1 || execute < 1)
		throw GradeTooHighException();
	if (sign > 150 || execute > 150)
		throw GradeTooLowException(0);
}

Form::Form(const Form &t) : _name(t.getName()), _signed(t.getSigned()), _sign(t.getSign()), _execute(t.getExecute()) {}

Form	&Form::operator=(const Form &t)
{
	if (this != &t)
		_signed = t.getSigned();
	return (*this);
}

Form::~Form() {}

const std::string	&Form::getName() const { return (_name); }

bool	Form::getSigned() const { return (_signed); }

int	Form::getSign() const { return (_sign); }

int	Form::getExecute() const { return (_execute); }

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("The grade wanted is too high, please choose another over or equals to 1\n");
}

Form::GradeTooLowException::GradeTooLowException(int i)
{
	if (i == 0)
		_error = "The grade wanted is too low, please choose another under or equals to 150\n";
	if (i == 1)
		_error = "Grade too low to sign.\n";
	if (i == 2)
		_error = "Grade too low to execute\n";
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char	*Form::GradeTooLowException::what() const throw()
{
	return (_error.c_str());
}

bool	Form::beSigned(const Bureaucrat &t)
{
	if (t.getGrade() > _sign)
		throw GradeTooLowException(1);
	if (_signed)
		return (1);
	_signed = 1;
	return (0);
}

std::ostream &operator<<(std::ostream &ost, const Form &t)
{
	ost << t.getName() << ", requiring grade " << t.getSign() << " to be signed and grade " << t.getExecute() << " to be executed has ";
	if (t.getSigned())
		ost << "already ";
	else
		ost << "not ";
	ost << "been signed.\n";
	return (ost);
}
