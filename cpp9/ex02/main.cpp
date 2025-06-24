/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 00:35:07 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/24 07:33:06 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "PmergeMe.hpp"
#include <stdlib.h>
#include <iostream>
#include <deque>
#include <vector>
#include <utility>
#include <limits>
#include <stdexcept>
#include <algorithm>
#include <list>
#include <math.h>


template<typename iter>
void	printList(iter begin, iter end, int grouping, int bol)
{
	if (bol == 1 || bol == 0)
		std::cout << "----Printer begin----\n";
	int i = 0;
	while (begin != end)
	{
		std::cout << *begin++ << std::endl;
		i++;
		if (!(i % grouping) && begin != end)
			std::cout << std::endl;
	}
	if (bol == 0 || bol == 2)
		std::cout << "----Printer end----\n";
}

template<template <typename, typename> typename container, typename iter>
int	operate(container<int, std::allocator<int> > &res, container<int, std::allocator<int> > &pend, iter num, container<int, std::allocator<int> > &vec)
{
	iter pos = std::lower_bound(res.begin(), res.end(), *num);
	int result = pos - res.begin();
	res.insert(pos, *num);
	pend.erase(num);
	(void) vec;
	return (result);
}

unsigned int jacob(int num)
{
	int one = -1;
	if (num % 2)
		one = 1;
	return ((pow(2, num) + one) * 2 / 3);
}

template<typename iter, template <typename, typename> typename container>
void	sortUp(iter begin, bool leftover, int recursion, iter ender, int pairs, container<int, std::allocator<int> > &res, container<int, std::allocator<int> > &pend, container<int, std::allocator<int> > &vec)
{
	for (int i = 0; i < pairs; i++)
	{
		res.push_back(*(begin + i * recursion / 2));
		pend.push_back(*(ender + i * recursion / 2));
	}
	if (leftover)
		pend.push_back(*(begin + pairs * recursion));
	int i = 0;
	unsigned int jac;
	while (pend.size())
	{
		jac = jacob(i + 1);
		if (jac > pend.size())
			jac = pend.size();
		while (pend.size() && jac--)
		{
			iter tmp = ender + jac * recursion / 2;
			int s = operate(res, pend, pend.begin() + jac, vec);
			std::rotate(begin + s * recursion / 2, tmp, tmp + recursion / 2);
			ender += recursion / 2;
		}
		i++;
	}
	res.clear();
	pend.clear();
}

template<typename iter>
void	moveToEnd(iter begin, int pairs, int recursion)
{
	iter end = begin + pairs * recursion;
	iter beg = begin;
	for (int i = 0; i < pairs; i++)
	{
		beg += recursion / 2;
		std::rotate(beg, beg + recursion / 2, end);
	}
}

template<typename iter, template <typename, typename> typename container>
void	pairUp(iter begin, int size, int recursion, iter end, container<int, std::allocator<int> > &res, container<int, std::allocator<int> > &pend, container<int, std::allocator<int> > &vec)
{
	if (recursion >= std::numeric_limits<int>::max() / 2)
		throw std::out_of_range("too many numbers");
	int pairs = size / recursion;
	if (pairs <= 1)
		return ;
	iter start = begin;
	for (int i = 0; i < pairs; i++)
	{
		if (*start < *(start + recursion / 2))
			std::rotate(start, start + recursion /2, start + recursion);
		start += recursion;
	}
	bool leftover = size % recursion / (recursion / 2);
	printList(begin, end, recursion, 1);
	std::cout << "------sort------\n";
	pairUp(begin, size, recursion * 2, end, res, pend, vec);
	moveToEnd(begin, pairs, recursion);
	sortUp(begin, leftover, recursion, begin + (pairs * recursion / 2), pairs, res, pend, vec);
	printList(begin, end, recursion, 2);
	std::cout << "This pair has ";
	if (!leftover)
		std::cout << "no ";
	std::cout << "leftovers\n";
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		return (0);
	std::list<int> lst;
	int i = 1;
	long num;
	if (ac - 1 == 1)
		return (0);
	while (av[i])
	{
		num = atol(av[i]);
		if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
			throw std::out_of_range("not an int");
		lst.push_back(num);
		i++;
	}
	// timer start
	std::vector<int> vec(lst.begin(), lst.end());
	printList(vec.begin(), vec.end(), 1, 0);
	std::vector<int> res;
	std::vector<int> pend;
	pairUp(vec.begin(), vec.size(), 2, vec.end(), res, pend, vec);
	std::cout << "\nThe end\n";
	printList(vec.begin(), vec.end(), 1, 0);
	return (0);
}
