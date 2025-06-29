/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 00:35:07 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/29 15:14:05 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// int comps = 0;

static bool	checkString(char *str)
{
	int i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			;
		else if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		return (0);
	std::list<int> lst;
	int i = 1;
	long num;
	// comps = 0;
	if (ac - 1 == 1)
	{
		std::cout << "Only one element, no use sorting\n";
		return (0);
	}
	while (av[i])
	{
		num = atol(av[i]);
		if (checkString(av[i]))
		{
			std::cerr << "Error: Not a number\n";
			return (1);
		}
		if (num > std::numeric_limits<int>::max())
		{
			std::cerr << "Error: Overflow\n";
			return (1);
		}
		if (num < 0)
		{
			std::cerr << "Error: Under 0\n";
			return (1);
		}
		lst.push_back(num);
		i++;
	}
	std::clock_t vec_time;
	std::clock_t deq_time;
	try
	{
		// 1st container
		timer(vec_time, 1);
		std::vector<int> vec(lst.begin(), lst.end());
		std::vector<int> res;
		std::vector<int> pend;
		pairUp(vec.begin(), vec.size(), 2, vec.end(), res, pend);
		timer(vec_time, 0);
		// std::cout << "Total comparisons: " << comps << std::endl;
		// comps = 0;
		timer(deq_time, 1);
		std::deque<int> deq(lst.begin(), lst.end());
		std::deque<int> res1;
		std::deque<int> pend1;
		pairUp(deq.begin(), deq.size(), 2, deq.end(), res1, pend1);
		timer(deq_time, 0);
		// std::cout << "Total comparisons: " << comps << std::endl;
		if (!std::equal(vec.begin(), vec.end(), deq.begin()))
		{
			std::cerr << "Error: Lists aren't the same.\n";
			return (1);
		}
		std::cout << "Before:\t";
		printFinal(lst.begin(), lst.end());
		std::cout << "After:\t";
		printFinal(vec.begin(), vec.end());
		std::cout << "Time to process a range of " << lst.size() << " elements with std::vector :\t";
		printTime(vec_time);
		std::cout << std::endl;
		std::cout << "Time to process a range of " << lst.size() << " elements with std::deque  :\t";
		printTime(deq_time);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}

	return (0);
}
