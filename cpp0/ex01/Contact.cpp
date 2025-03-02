/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:19:17 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 10:01:07 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::display()
{
	for (int i = 0; i < 5; i++)
		std::cout << fields[i] << std::endl;
}

static void	displaycolumn(std::string str, bool lastcolumn)
{
	if (str.size() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		for (int i = 10 - str.size(); i > 0; i--)
			std::cout << " ";
		std::cout << str;
	}
	if (lastcolumn)
		std::cout << std::endl;
	else
		std::cout << "|";
}

void	Contact::displayShort()
{
	for (int i = 0; i < 5; i++)
		displaycolumn(fields[i], (i == 4));
}

void	Contact::addContact()
{
	int	i;

	i = 0;
	std::cout << "First Name:\n";
	fields[i++] = getString();
	std::cout << "Last Name:\n";
	fields[i++] = getString();
	std::cout << "Nickname:\n";
	fields[i++] = getString();
	std::cout << "Phone Number:\n";
	fields[i++] = getString();
	std::cout << "Darkest Secret:\n";
	fields[i] = getString();
}
