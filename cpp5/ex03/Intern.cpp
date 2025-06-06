/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:29:50 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/05 00:24:12 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &t) {}

Intern	&Intern::operator=(const Intern &t) { return (*this); }

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
	static const std::string _forms[] = {"shrubbery", "robotomy", "presidential"};
	static AForm *(*forms[])(std::string) = {&shrub, &robot, &pres};
	for (int i = 0; i < 3; i++)
	{
		if (form == _forms[i])
		{
			std::cout << "Intern creates " << form << " form.\n";			
			return (forms[i](target));
		}
	}
	std::cout << "Intern does not know how to create " << form << " form. It only knows how to make [shrubbery, robotomy, presidential] forms.\n";
	return (0);
}
