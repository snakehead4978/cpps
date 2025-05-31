/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:51:02 by snek              #+#    #+#             */
/*   Updated: 2025/05/31 16:05:35 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*theOG;
	
	std::cout << "Creation of first zombie horde 'Dave' comprised of 10 clones\n" << std::endl;
	theOG = zombieHorde(10, "Dave");
	if (!theOG)
		return (1);
	std::cout << "Time to feast!\n" << std::endl;
	for (int i = 0; i < 10; i++)
		theOG[i].announce();
	std::cout << "\nSCAR-20 time!\n" << std::endl;
	delete[] theOG;
	return (0);
}
