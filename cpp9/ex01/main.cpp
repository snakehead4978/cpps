/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 05:31:57 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/19 08:53:25 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

int	main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	try
	{
		RPN		polish;
		std::string	c;
		std::string equation(av[1]);
		if (ac == 2 && equation.length() > 1)
		{
			std::stringstream stream(av[1]);
			while (!stream.eof())
			{
				stream >> c;
				if (c.length() != 1)
					throw std::invalid_argument("multi-char detected");
				polish.use(c[0]);
			}
		}
		else
		{
			int i = 1;
			while (av[i])
			{
				if (!*av[i] || av[i][1])
					throw std::invalid_argument("multi-char detected");
				polish.use(*av[i]);
				i++;
			}
		}
		polish.announce();
	}
	catch(const std::exception& e)
	{
		// std::cout << e.what() << std::endl;
		std::cerr << "Error" << '\n';
		return (1);
	}
	return (0);
}
