/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:50:13 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 14:51:47 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practce Dummy") {}

Dummy::Dummy(const Dummy &t) : ATarget(t.getType()) {}

Dummy	&Dummy::operator=(const Dummy &t)
{
	if (this != &t)
	{
		_type = t.getType();
	}
	return (*this);
}

Dummy::~Dummy() {}

ATarget	*Dummy::clone()
{
	ATarget *obj = new Dummy(*this);
	return (obj);
}
