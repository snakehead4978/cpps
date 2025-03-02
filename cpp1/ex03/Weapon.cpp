/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:03:16 by snek              #+#    #+#             */
/*   Updated: 2025/02/28 09:58:15 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) { __type = type; }

Weapon::~Weapon() {}

std::string const	&Weapon::getType() { return (__type); }

void	Weapon::setType(std::string type) { __type = type; }
