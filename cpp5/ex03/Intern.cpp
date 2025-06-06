/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:29:50 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/06 22:55:58 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &t) { (void)t; }

Intern	&Intern::operator=(const Intern &t) { (void)t; return (*this); }

Intern::~Intern() {}

static AForm *shrub(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm *robot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *pres(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string form, std::string target) const
{
	static const std::string _forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	static AForm *(*forms[])(std::string) = {&shrub, &robot, &pres};
	for (int i = 0; i < 3; i++)
	{
		if (form == _forms[i])
		{
			std::cout << "Intern creates " << form << " form.\n";			
			return (forms[i](target));
		}
	}
	std::cout << "Intern does not know how to create " << form << " form. It only knows how to make [shrubbery creation, robotomy request, presidential pardon] forms.\n";
	return (0);
}
