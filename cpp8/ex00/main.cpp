/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 04:35:48 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/10 22:51:18 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>


int	main()
{
	try
	{
		std::list<int> cont1;
		for (int i = 0; i < 5; i++)
			cont1.push_front(i);
		std::vector<int> cont2(cont1.begin(), cont1.end());
		int num = cont1.front();
		int last = cont1.back();
		std::cout << "first element of c1 is " << num << " and last element is " << last << std::endl;
		std::cout << "replacing last element with first in c2\n";
		cont2.back() = num;
		std::cout << *easyfind(cont1, num) << " found in c1\n";
		std::cout << *easyfind(cont2, num) << " found in c2\n";
		std::cout << *easyfind(cont1, last) << " found in c1\n";
		std::cout << *easyfind(cont2, last) << " found in c2\n";
		std::cout << "End reached\n";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);	
}
