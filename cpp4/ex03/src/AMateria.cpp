/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:43:57 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 21:55:40 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : __type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& t)
{
	__type = t.__type;
}

AMateria&	 AMateria::operator=(const AMateria& t)
{
	if (this != &t)
		__type = t.__type;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (__type);
}

void	AMateria::use(ICharacter &target) { std::cout << "Invalid Spell trying to be cast on " << target.getName() << ", cannot cast nothing! (Overload 'use' function in AMateria children)\n"; }
