/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:48:16 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 12:58:41 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() : _name("no name"), _effects("no effects") {}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

const std::string &ASpell::getName() const { return (_name); }

const std::string &ASpell::getEffects() const { return (_effects); }

ASpell::~ASpell() {}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}

