/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:51:02 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 22:58:03 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*theOG;
	
	std::cout << "Creation of first zombie horde 'Dave' comprised of 10 clones" << std::endl;
	theOG = zombieHorde(10, "Dave");
	if (!theOG)
		return (1);
	std::cout << "Time to feast!" << std::endl;
	for (int i = 0; i < 10; i++)
		theOG[i].announce();
	std::cout << "SCAR-20 time!" << std::endl;
	delete[] theOG;
	return (0);
}
