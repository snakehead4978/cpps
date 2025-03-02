/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:51:02 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 22:24:38 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*leader;
	
	std::cout << "Creation of first zombie 'Dave' through randomChump" << std::endl;
	randomChump("Dave");
	std::cout << "Creation of leader zombie 'Dr. Zomboss'" << std::endl;
	leader = newZombie("Dr. Zomboss");
	if (!leader)
		return (1);
	std::cout << "Who's that on the roof?!" << std::endl;
	leader->announce();
	std::cout << "Bring out the shotgun!" << std::endl;
	delete leader;
	return (0);
}
