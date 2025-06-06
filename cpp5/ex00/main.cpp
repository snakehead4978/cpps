/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:12:29 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 18:57:44 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>


int main()
{
	try
	{
		std::cout << "\nCreating bureacrats with too high of a grade\n";
		Bureaucrat("br1", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what();
	}
	try
	{
		std::cout << "\nCreating bureacrats with too low of a grade\n";
		Bureaucrat("br2", 1200);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what();
	}
	try
	{
		std::cout << "\nCreating bureacrats and incrementing past allowed\n";
		Bureaucrat br1 = Bureaucrat("br1", 2);
		br1.promote();
		br1.promote();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what();
	}
	try
	{
		std::cout << "\nCreating bureacrats and decrementing past allowed\n";
		Bureaucrat br2 = Bureaucrat("br2", 149);
		br2.demote();
		br2.demote();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what();
	}
	try
	{
		std::cout << "\nNormal creations and getting grades\n";
		Bureaucrat br1 = Bureaucrat("Dave", 100);
		Bureaucrat br2 = br1;
		br2.promote();
		Bureaucrat br3;
		br3 = br1;
		br3.demote();
		std::cout << br1 << br2 << br3;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what();
	}
	return (0);	
}
