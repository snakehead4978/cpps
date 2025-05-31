/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:51:02 by snek              #+#    #+#             */
/*   Updated: 2025/05/31 16:03:08 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*leader;
	
	std::cout << "Creation of first zombie 'Dave' through randomChump" << std::endl;
	randomChump("Dave");
	std::cout << "\nCreation of leader zombie 'Dr. Zomboss'" << std::endl;
	leader = newZombie("Dr. Zomboss");
	if (!leader)
		return (1);
	std::cout << "Who's that on the roof?!" << std::endl;
	leader->announce();
	std::cout << "\nBring out the shotgun!" << std::endl;
	delete leader;
	return (0);
}
