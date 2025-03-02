/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:46:53 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 09:57:27 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int	main(void)
{
	std::string	str;
	bool		check;
	PhoneBook	book;

	check = false;
	do
	{
		if (check)
			std::cout << "Not a valid command. ADD, SEARCH or EXIT\n";
		else
			std::cout << "Awaiting command.[ADD, SEARCH, EXIT]\n";
		check = false;
		str = getString();
		if (str == "ADD")
			book.addContact();
		else if (str == "SEARCH")
			book.searcher();
		else
			check = true;
	}
	while (str != "EXIT");
	return (0);
}
