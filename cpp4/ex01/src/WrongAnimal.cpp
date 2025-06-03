/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:47:11 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/03 11:06:03 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : __type("no type") { std::cout << "WrongAnimal Default constructor for no type called\n"; }

WrongAnimal::WrongAnimal(std::string type) : __type(type) { std::cout << "WrongAnimal overloaded constructor for " << type << " called\n"; }

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal Destructor for " << __type << " called\n"; }

WrongAnimal::WrongAnimal(const WrongAnimal& t)
{
	__type = t.__type;
	std::cout << "WrongAnimal Copy constructor for " << __type << " called\n";
}

WrongAnimal&	 WrongAnimal::operator=(const WrongAnimal& t)
{
	if (this != &t)
	{
		this->__type = t.__type;
	}
	std::cout << "WrongAnimal Copy assignment operator for " << __type << " called\n";
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "??? nOiSeS\n";
}

const std::string WrongAnimal::getType() const
{
	return (__type);
}

void	WrongAnimal::setType(std::string type)
{
	this->__type = type;
}
