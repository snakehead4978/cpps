/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Misc.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:53:28 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 09:32:50 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Misc.hpp"

std::string	getString()
{
	std::string	str;

	// std::getline(std::cin, str);
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
