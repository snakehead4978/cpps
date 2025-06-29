/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 09:00:30 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/29 15:13:37 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
# define PMERGE_HPP

# include <ctime>
# include <vector>
# include <deque>
# include <algorithm>
# include <stdexcept>
# include <iostream>
# include <limits>
# include <list>
# include <math.h>

// # include <stdlib.h>
// # include <utility>

// extern int comps;

unsigned int jacob(int num);

// Printer funcs

void	timer(std::clock_t &time, bool start);
void	printTime(std::clock_t &time);


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

template<typename iter>
void printer(iter a, iter b)
{
	std::cout << "{";
	for (; a != b; a++)
	{
		std::cout << *a;
		if (a != b - 1)
			std::cout << ", ";
	}
	std::cout << "}\n";
}

template <typename iter>
void	printFinal(iter it1, iter it2)
{
	for (;it1 != it2; it1++)
		std::cout << *it1 << " ";
	std::cout << std::endl;
}


// Algorithm

template<template <typename, typename> class container, typename iter>
int	operate(container<int, std::allocator<int> > &res, container<int, std::allocator<int> > &pend, iter num, iter &end, int tmp2)
{
	iter pos = std::lower_bound(res.begin(), end + 1, *num);
	// comps += floor(log2(end - res.begin() + 1)) + 1;
	// std::cout << "Number of nums in list " << res.size() << ", numbers i compare to " << end - res.begin() + 1 << std::endl;
	// std::cout << "Current list: ";
	// printer(res.begin(), res.end());
	// std::cout << "My num " << *num << ",  ";
	// printer(res.begin(), end + 1);
	// std::cout << std::endl;
	int result = pos - res.begin();
	bool done = (result == end + 1 - res.begin());
	res.insert(pos, *num);
	if (done)
		end = res.begin() + tmp2 - 1;
	else
		end = res.begin() + tmp2;
	pend.erase(num);
	return (result);
}



template<typename iter, template <typename, typename> class container>
void	sortUp(iter begin, bool leftover, int recursion, iter ender, int pairs, container<int, std::allocator<int> > &res, container<int, std::allocator<int> > &pend)
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
	res.insert(res.begin(), pend[0]);
	pend.erase(pend.begin());
	std::rotate(begin, ender, ender + recursion / 2);
	ender += recursion / 2;
	iter it;
	int jacsum = 1;
	int jactmp;
	while (pend.size())
	{
		jac = jacob(i + 1);
		if (jac > pend.size())
			jac = pend.size();
		jactmp = jac;
		int tmp2 = jacsum + jac - 1;
		it = res.begin() + tmp2;
		while (pend.size() && jac--)
		{
			iter tmp = ender + jac * recursion / 2;
			int s = operate(res, pend, pend.begin() + jac, it, tmp2);
			std::rotate(begin + s * recursion / 2, tmp, tmp + recursion / 2);
			ender += recursion / 2;
		}
		jacsum += jactmp * 2;
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

template<typename iter, template <typename, typename> class container>
void	pairUp(iter begin, int size, int recursion, iter end, container<int, std::allocator<int> > &res, container<int, std::allocator<int> > &pend)
{
	if (recursion >= std::numeric_limits<int>::max() / 2)
		throw std::out_of_range("too many numbers");
	int pairs = size / recursion;
	if (!pairs)
		return ;
	iter start = begin;
	for (int i = 0; i < pairs; i++)
	{
		// comps++;
		if (*start < *(start + recursion / 2))
			std::rotate(start, start + recursion /2, start + recursion);
		start += recursion;
	}
	bool leftover = size % recursion / (recursion / 2);
	pairUp(begin, size, recursion * 2, end, res, pend);
	moveToEnd(begin, pairs, recursion);
	sortUp(begin, leftover, recursion, begin + (pairs * recursion / 2), pairs, res, pend);
}





#endif