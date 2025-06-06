/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:58:52 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 22:21:41 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("no name") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &t) : AForm(t), _target(t._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &t)
{
	if (this != &t)
	{
		_target = t._target;
		setSigned(t.getSigned());		
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::toExecute(Bureaucrat const & executor) const
{
	(void)executor;
	static int	i = 0;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
	if (i)
		std::cout << "This is pardon number " << i + 1 << std::endl;
	i++;
}
