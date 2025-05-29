/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 20:45:19 by snek              #+#    #+#             */
/*   Updated: 2025/05/29 20:24:50 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static std::string	getString()
{
	std::string	str;

	std::cin >> str;
	if (std::cin.eof())
	{
		std::cout << "Standard input closed\n";
		exit(1);
	}
	if (!str.size())
	{
		std::cout << "Cannot be empty" << std::endl;
		return (getString());
	}
	return (str);
}

int	main()
{
	std::string	str;
	Harl		harlito;

	do
	{
		std::cout << "Awaiting command.[DEBUG, INFO, WARNING, ERROR, EXIT]\n";
		str = getString();
		std::cout << std::endl;
		harlito.complain(str);
	}
	while (str != "EXIT");
	return (0);
}
