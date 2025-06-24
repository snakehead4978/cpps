/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 00:57:13 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/24 17:31:17 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ScalarConverter::convert(av[1]);
	// std::cout << static_cast<float>(atof(av[1]))<<std::endl;
	return (0);
}
