/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 20:45:19 by snek              #+#    #+#             */
/*   Updated: 2025/03/01 23:17:40 by snek             ###   ########.fr       */
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
		std::cout << "Awaiting command.[debug, info, warning, error, exit]\n";
		str = getString();
		std::cout << std::endl;
		harlito.complain(str);
	}
	while (str != "exit");
	return (0);
}
