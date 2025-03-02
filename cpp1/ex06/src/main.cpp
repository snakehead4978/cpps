/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 20:45:19 by snek              #+#    #+#             */
/*   Updated: 2025/03/01 23:19:00 by snek             ###   ########.fr       */
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

static int	coolMain()
{
	std::string	str;
	Harl		harlito;

	do
	{
		std::cout << "Awaiting command.[debug, info, warning, error, exit]\n";
		str = getString();
		std::cout << std::endl;
		harlito.filter(str);
	}
	while (str != "exit");
	return (0);
}

int	main(int ac, char **av)
{
	Harl		harlito;

	if (ac == 1)
		return (coolMain());
	else if (ac == 2)
	{
		std::string	str(av[1]);
		harlito.filter(av[1]);
	}
	else
		return (1);
	return (0);
}
