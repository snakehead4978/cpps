/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:07:53 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 19:28:51 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : __type("no type") { std::cout << "Default Animal constructor for no type called\n"; }

Animal::Animal(std::string type) : __type(type) { std::cout << "Animal constructor for " << __type << " called\n"; }

Animal::~Animal() { std::cout << "Animal Destructor for " << __type << " called\n"; }

Animal::Animal(const Animal& t)
{
	__type = t.__type;
	std::cout << "Animal Copy constructor for " << __type << " called\n";
}

Animal&	 Animal::operator=(const Animal& t)
{
	if (this != &t)
	{
		this->__type = t.__type;
	}
	std::cout << "Animal Copy assignment operator for " << __type << " called\n";
	return (*this);
}

std::string Animal::getType() const
{
	return (__type);
}

void	Animal::setType(std::string type)
{
	this->__type = type;
}
