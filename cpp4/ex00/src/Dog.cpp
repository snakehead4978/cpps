/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:29:02 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 17:43:08 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") { std::cout << "Dog Default constructor called\n"; }

Dog::~Dog() { std::cout << "Dog Destructor called\n"; }

Dog::Dog(const Dog& t) : Animal(t)
{
	this->__type = t.__type;
	std::cout << "Dog Copy constructor called\n";
}

Dog&	 Dog::operator=(const Dog& t)
{
	if (this != &t)
	{
		this->__type = t.__type;
	}
	std::cout << "Dog Copy assignment operator called\n";
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof\n";
}
