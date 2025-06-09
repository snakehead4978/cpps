/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 00:16:28 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/09 02:43:55 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>
#include <stdlib.h>
#include <iomanip>

static void	infandsign(const std::string &str, int &inf, bool &sign)
{
	static const std::string infs[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	if (str[0] == '-')
		sign =  1;
	for (int i = 0; i < 6; i++)
	{
		if (infs[i] == str)
		{
			inf = 1;
			if (i == 2 || i == 5)
				inf = -1;
			return ;
		}
	}
}

static void	display(int inf, bool sign, double number)
{
	std::cout << "char: ";
	if (!inf && !sign && (number >= 0 && number <= 256))
	{
		if (number < 33 || number > 126)
			std::cout << "Non displayable\n";
		else
			std::cout << static_cast<char>(number) << std::endl;
	}
	else
		std::cout << "impossible\n";
	std::cout << "int: ";
	if (inf)
	{
		if (inf == -1)
			std::cout << "impossible\n";
		else
		{
			if (sign)
				std::cout << "-";
			std::cout << "inf\n";
		}
	}
	else
	{
		if (number < std::numeric_limits<int>::min() || number > std::numeric_limits<int>::max())
			std::cout << "overflows\n";
		else
			std::cout << static_cast<int>(number) << std::endl;
	}
	std::cout << "float: ";
	if (inf)
	{
		if (sign)
			std::cout << "-";
		if (inf == -1)
			std::cout << "nanf\n";
		else
			std::cout << "inff\n";
	}
	else
	{
		if (number < -1 * std::numeric_limits<float>::max() || number > std::numeric_limits<float>::max())
			std::cout << "overflows\n";
		else
		{
			std::cout << std::setprecision(1) << std::fixed;
			std::cout << static_cast<float>(number) << "f" << std::endl;
			std::cout << std::setprecision(6);
			std::cout.unsetf(std::ios::fixed);
		}
	}
	std::cout << "double: ";
	if (inf)
	{
		if (sign)
			std::cout << "-";
		if (inf == -1)
			std::cout << "nan\n";
		else
			std::cout << "inf\n";
	}
	else
	{
		std::cout << std::setprecision(1) << std::fixed;
		std::cout << number << std::endl;
		std::cout << std::setprecision(6);
		std::cout.unsetf(std::ios::fixed);
	}
}

void	ScalarConverter::convert(const std::string &str)
{
	int		isInfinity = 0;
	bool	sign = 0;
	double	number = 0;
	bool	isChar = 0;
	
	if (str.empty())
	{
		std::cout << "Please input something.\n";
		return ;
	}
	if (str.length() == 1 && (str[0] < '0' || str[0] > '1'))
	{
		isChar = 1;
		number = str[0];
	}
	if (!isChar)
		infandsign(str, isInfinity, sign);
	if (!isInfinity && !isChar)
	{
		char *end;
		number = strtod(str.c_str(), &end);
		if (*end && (*end != 'f' || *(end + 1)))
		{
			std::cout << "Please input a number of char.\n";
			return ;
		}
	}
	// std::cout << "Inf is :" << isInfinity << " , and sign: " << sign << " , and char: " << isChar <<" , and num: " << number << std::endl << std::endl;
	display(isInfinity, sign, number);	
}
