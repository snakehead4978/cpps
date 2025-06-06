/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:12:29 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 22:20:52 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	try
	{
		std::cout << "\nCreation of shub and executing before signing test\n";
		Bureaucrat Mr_Shrubby("Mr_Shrubby", 130);
		ShrubberyCreationForm Shrubby_form("first");
		std::cout << Shrubby_form;
		Mr_Shrubby.executeForm(Shrubby_form);
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what();
	}
	try
	{
		std::cout << "\nCreation of shub and working\n";
		Bureaucrat Mr_Shrubby("Mr_Shrubby", 130);
		ShrubberyCreationForm Shrubby_form("second");
		std::cout << Shrubby_form;
		Mr_Shrubby.signForm(Shrubby_form);
		Mr_Shrubby.executeForm(Shrubby_form);
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what();
	}
	try
	{
		std::cout << "\nCreation of robo and normal execution\n" ;
		RobotomyRequestForm Robo_form("I am a robo form");
		Bureaucrat Mr_Robo("Mr_Robo", 45);
		Mr_Robo.signForm(Robo_form);
		Mr_Robo.executeForm(Robo_form);
		Mr_Robo.executeForm(Robo_form);
		Mr_Robo.executeForm(Robo_form);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::cout << "\nCreation of robo and can sign but not execute\n" ;
		RobotomyRequestForm Robo_form("I am a robo form");
		Bureaucrat Mr_Robo("Mr_Robo", 50);
		Mr_Robo.signForm(Robo_form);
		Mr_Robo.executeForm(Robo_form);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}	
	try
	{
		std::cout << "\nCreation of president and working\n" ;
		Bureaucrat Mr_President("Mr_President", 5);
		PresidentialPardonForm President_form("Dave");
		Mr_President.signForm(President_form);
		Mr_President.executeForm(President_form);
		Mr_President.executeForm(President_form);
		Mr_President.executeForm(President_form);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}	
	return (0);	
}
