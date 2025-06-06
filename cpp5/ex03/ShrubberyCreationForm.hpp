/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 20:35:53 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 21:56:10 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include <fstream>
# include "AForm.hpp"
# include <string>

class	ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &);
		~ShrubberyCreationForm();
		class FileProblems : std::exception
		{
			public:
				const char *what() const throw();
		};
		void	toExecute(Bureaucrat const & executor) const;
};



#endif