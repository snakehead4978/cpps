/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:58:51 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 23:10:56 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string	str;
	std::string	*stringPTR;
	
	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::string	&stringREF = str;
	std::cout << "Memory addresses for string: " << &str;
	std::cout << "; for stringPTR: " << stringPTR;
	std::cout << "; for stringREF: " << &stringREF << std::endl;
	std::cout << "Values for string: " << str;
	std::cout << "; for stringPTR: " << *stringPTR;
	std::cout << "; for stringREF: " << stringREF << std::endl;
	return (0);
}
