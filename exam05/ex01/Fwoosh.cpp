/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:38:15 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 14:52:58 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(const Fwoosh &t) : ASpell(t.getName(), t.getEffects()) {}

Fwoosh	&Fwoosh::operator=(const Fwoosh &t)
{
	if (this != &t)
	{
		_name = t.getName();
		_effects = t.getEffects();
	}
	return (*this);
}

Fwoosh::~Fwoosh() {}

ASpell	*Fwoosh::clone()
{
	ASpell *obj = new Fwoosh(*this);
	return (obj);
}