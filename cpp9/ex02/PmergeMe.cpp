/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 00:34:14 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/26 21:28:19 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

unsigned int jacob(int num)
{
	int one = -1;
	if (num % 2)
		one = 1;
	return ((pow(2, num) + one) * 2 / 3);
}

void	timer(std::clock_t &time, bool start)
{
	if (start)
		time = std::clock();
	else
		time = std::clock() - time;
}

void	printTime(std::clock_t &time)
{
	std::cout << time * 1000000 / CLOCKS_PER_SEC << "us";
}

