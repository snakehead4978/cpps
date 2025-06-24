/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 04:17:30 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/24 13:34:08 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <math.h>
#include <stdlib.h>

int jacob(int num)
{
	int one = -1;
	if (num % 2)
		one = 1;
	return ((pow(2, num) + one) * 2 / 3);
}

long _jacobsthal_number(long n) { return round((pow(2, n + 1) + pow(-1, n)) / 3); }

int main(int ac, char **av)
{
	if (ac == 1)
		return 0;
	// std::deque<int> vec({6 , 4 , 3 , 2, 7});
	// std::cout << vec[0] << std::endl;
	// std::cout << vec[4] << std::endl;
	// std::cout << vec[7] << std::endl;
	std::cout << _jacobsthal_number(atoi(av[1])) << std::endl;
	return 0;
}