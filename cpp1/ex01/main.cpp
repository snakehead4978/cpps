/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:51:02 by snek              #+#    #+#             */
/*   Updated: 2025/05/29 14:31:00 by jla-chon         ###   ########.fr       */
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
