/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:25:42 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 17:42:24 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") { std::cout << "Cat Default constructor called\n"; }

Cat::~Cat() { std::cout << "Cat Destructor called\n"; }

Cat::Cat(const Cat& t) : Animal(t)
{
	this->__type = t.__type;
	std::cout << "Cat Copy constructor called\n";
}

Cat&	 Cat::operator=(const Cat& t)
{
	if (this != &t)
	{
		this->__type = t.__type;
	}
	std::cout << "Cat Copy assignment operator called\n";
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow\n";
}
