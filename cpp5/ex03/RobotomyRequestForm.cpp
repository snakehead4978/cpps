/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:45:55 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 22:20:22 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("no name") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &t) : AForm(t), _target(t._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &t)
{
	if (this != &t)
	{
		_target = t._target;
		setSigned(t.getSigned());		
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::toExecute(Bureaucrat const & executor) const
{
	std::cout << "*Drilling noises*\n...\n...\n...\n";
	std::cout << "Operation on " << executor.getName() << " ";
	if (std::rand() % 2)
		std::cout << "un";
	std::cout << "successful\n";
}
