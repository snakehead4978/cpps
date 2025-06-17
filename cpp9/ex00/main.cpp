/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:26:41 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/17 12:36:21 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include "Date.hpp"



int	main(int ac, char **av)
{
	// if (ac != 2)
	// {
	// 	std::cerr << "Error: could not open file.\n";
	// 	return (1);
	// }
	(void) av;
	(void) ac;
	try
	{
		Date a = Date("10013-02-28");
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	return (0);
}

