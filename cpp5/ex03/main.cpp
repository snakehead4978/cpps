/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:12:29 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/06 22:53:16 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		std::cout << "Creating slave and making all 3 forms with Target[n]\n";
		Intern slave;
		AForm *shrub = slave.makeForm("shrubbery creation", "Target1");
		AForm *robot = slave.makeForm("robotomy request", "Target2");
		AForm *president = slave.makeForm("presidential pardon", "Target3");
		
		std::cout << "\nHaving president sign and execute all 3 forms\n";
		Bureaucrat realPresident("President", 1);
		realPresident.signForm(*shrub);
		realPresident.signForm(*robot);
		realPresident.signForm(*president);
		realPresident.executeForm(*shrub);
		realPresident.executeForm(*robot);
		realPresident.executeForm(*president);

		std::cout << "\nTesting non existent form\n";
		AForm *error = slave.makeForm("whoop form", "Target4");
		delete shrub;
		delete robot;
		delete president;
		delete error;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}	
	return (0);	
}
