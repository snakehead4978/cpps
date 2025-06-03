/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:29:02 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/03 11:38:01 by jla-chon         ###   ########.fr       */
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
	__brain = new Brain(*t.__brain);
	this->__type = t.__type;
	std::cout << "Dog Copy constructor called\n";
}

Dog&	 Dog::operator=(const Dog& t)
{
	if (this != &t)
	{
		delete __brain;
		__brain = new Brain(*t.__brain);
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
