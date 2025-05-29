/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:03:16 by snek              #+#    #+#             */
/*   Updated: 2025/05/29 16:01:55 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : __type("no type") {}

Weapon::Weapon(std::string type) { __type = type; }

Weapon::~Weapon() {}

std::string const	&Weapon::getType() { return (__type); }

void	Weapon::setType(std::string type) { __type = type; }
