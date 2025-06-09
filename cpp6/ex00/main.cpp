/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 00:57:13 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/09 01:07:02 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ScalarConverter::convert(av[1]);
	return (0);
}
