/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:47:12 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 22:24:19 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie	*zomb;

	zomb = new Zombie(name);
	if (!zomb)
	{
		std::cout << "Mem alloc failed" << std::endl;
		return (0);
	}
	return (zomb);
}
