/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:44:22 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 21:57:41 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

# include "AForm.hpp"
# include <string>
# include <stdlib.h>

class	RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &);
		~RobotomyRequestForm();
		void	toExecute(Bureaucrat const & executor) const;
};



#endif