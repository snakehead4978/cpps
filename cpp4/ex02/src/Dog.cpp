/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:29:02 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 19:15:30 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	__brain = new Brain("Dog Things");
	std::cout << "Dog Default constructor called\n";
}

Dog::~Dog()
{
	delete __brain;
	std::cout << "Dog Destructor called\n";
}

Dog::Dog(const Dog& t) : Animal(t)
{
	this->__type = t.__type;
	__brain = t.__brain;
	std::cout << "Dog Copy constructor called\n";
}

Dog&	 Dog::operator=(const Dog& t)
{
	if (this != &t)
	{
		__brain = t.__brain;
		this->__type = t.__type;
	}
	std::cout << "Dog Copy assignment operator called\n";
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof\n";
}

void	Dog::setIdeas(std::string str)
{
	__brain->setIdeas(str);
}

void	Dog::setIdea(int i, std::string str)
{
	__brain->setIdea(i, str);
}

std::string	Dog::getIdea(int i) const
{
	return (__brain->getIdea(i));
}
