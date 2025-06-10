/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 02:33:00 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/10 02:45:54 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void func1(const int &a)
{
	std::cout << a;
}

void func2(int a)
{
	std::cout << a;
}

void func3(int &a)
{
	std::cout << ++a;
}

int main()
{
	int array[4] = {0, 1, 2, 3};
	::iter(array, 4, func1);
	std::cout << std::endl;
	::iter(array, 4, func2);
	std::cout << std::endl;
	::iter(array, 4, func3);
	std::cout << std::endl;
	const int array2[4] = {0, 1, 2, 3};
	::iter(array2, 4, func1);
	std::cout << std::endl;
	::iter(array2, 4, func2);
	std::cout << std::endl;
	return (0);
}
