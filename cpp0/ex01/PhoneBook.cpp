/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:00:34 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 10:01:11 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addContact()
{
	Contact	contact;
	int		i;

	i = index;
	if (index == 8)
		i = 0;
	contacts[i].addContact();
	index++;
	if (index >= 8)
		index = 8;
}

void	PhoneBook::searcher()
{
	std::string	str;
	int			j;

	if (!index)
	{
		std::cout << "No contacts available.\n";
		return ;
	}
	for (int i = 0; i < index; i++)
	{
		contacts[i].displayShort();
	}
	do
	{
		std::cout << "Select index 1-" << index << std::endl;
		str = getString();
		j = str[0] - '0';
	} while (str.size() != 1 || j > 8 || j > index);
	contacts[j - 1].display();
}
