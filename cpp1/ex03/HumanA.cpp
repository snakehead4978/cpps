/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:22:37 by snek              #+#    #+#             */
/*   Updated: 2025/02/28 10:38:19 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : __weapon(weapon), __name(name) {}

HumanA::~HumanA() {}

void	HumanA::attack() {std::cout << __name << " attacks with their " << __weapon.getType() << std::endl; }
