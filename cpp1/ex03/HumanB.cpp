/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:25:46 by snek              #+#    #+#             */
/*   Updated: 2025/02/28 10:40:30 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : __weapon(0), __name(name) {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	std::cout << __name << " attacks with their ";
	if (!__weapon)
		std::cout << "hand";
	else
		std::cout << __weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) { __weapon = &weapon; }
