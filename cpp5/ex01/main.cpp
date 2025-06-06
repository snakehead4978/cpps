/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:12:29 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 20:28:23 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>


int main()
{
	try
	{
		std::cout << "\nCreating form with too high of a grade\n";
		Form		f1 = Form("f1", -10, 10);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what();
	}
	try
	{
		std::cout << "\nCreating form with too low of a grade\n";
		Form		f1 = Form("f1", 100, 160);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what();
	}
	try
	{
		std::cout << "\nSigning form normally then trying to sign again then grade change into sign\n";
		Form		f1 = Form("f1", 100, 100);
		Bureaucrat	b1 = Bureaucrat("b1", 100);
		std::cout << f1;
		b1.signForm(f1);
		b1.signForm(f1);
		b1.demote();
		b1.signForm(f1);
		std::cout << f1;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what();
	}
	return (0);	
}
