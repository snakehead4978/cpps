/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:05:35 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/07 15:05:02 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("no name") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &t) : AForm(t), _target(t._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &t)
{
	if (this != &t)
	{
		_target = t._target;
		setSigned(t.getSigned());		
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const char *ShrubberyCreationForm::FileProblems::what() const throw()
{
	return ("Problem opening file\n");
}
				
void	ShrubberyCreationForm::toExecute(Bureaucrat const & executor) const
{
	std::ofstream outfile;
	
	(void)executor;
	outfile.open((_target + "_shrubbery").c_str());
	if (outfile.is_open())
	{
		outfile << "       *\n      ***\n     *****\n    *******\n   *********\n  ***********\n *************\n      |||\n\n\n";
		outfile << "       *\n      ***\n     *****\n    *******\n   *********\n  ***********\n *************\n      |||\n";
		outfile << "ASCII trees\n";
		outfile.close();
	}
	else
		throw FileProblems();
}

