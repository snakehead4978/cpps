/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:59:09 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 13:38:24 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"


ATarget::~ATarget() {}

ATarget::ATarget() : _type("no type") {}

ATarget::ATarget(std::string type) : _type(type) {}

const std::string &ATarget::getType() const
{
	return (_type);
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!\n";
}

