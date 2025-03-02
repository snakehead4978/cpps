/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:08:40 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 22:49:42 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*firstZomb;

	firstZomb = new Zombie[N];
	if (!firstZomb)
	{
		std::cout << "Mem alloc failure" << std::endl;
		return (0);
	}
	for (int i = 0; i < N; i++)
		firstZomb[i].knight(name);
	return (firstZomb);
}
