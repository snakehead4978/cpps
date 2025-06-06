/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:25:20 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/05 00:24:13 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <string>

class	Intern
{
	public:
		Intern();	
		Intern(const Intern &);
		Intern	&operator=(const Intern &);	
		~Intern();
		AForm	*makeForm(std::string form, std::string target) const;
};

#endif