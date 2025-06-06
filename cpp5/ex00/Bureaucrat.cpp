/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:51:37 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 18:46:52 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("no name"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
	throw GradeTooHighException();
	if (grade > 150)
	throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &t) : _name(t.getName()), _grade(t.getGrade()) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &t)
{
	if (this != &t)
		_grade = t.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

// Exceptions

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade wanted is too high, please choose another over or equals to 1\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade wanted is too low, please choose another under or equals to 150\n");
}

// Getters and -crements

const std::string	&Bureaucrat::getName() const { return (_name); }

int	Bureaucrat::getGrade() const { return (_grade); }

void	Bureaucrat::promote()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::demote()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

std::ostream &operator<<(std::ostream &ost, Bureaucrat const &t)
{
	ost << t.getName() << ", bureaucrat grade " << t.getGrade() << ".\n";
	return (ost);
}
