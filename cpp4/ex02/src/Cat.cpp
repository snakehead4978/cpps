/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:25:42 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 19:15:02 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	__brain = new Brain("Cat Thing");
	std::cout << "Cat Default constructor called\n";
}

Cat::~Cat()
{
	delete __brain;
	std::cout << "Cat Destructor called\n";
}

Cat::Cat(const Cat& t) : Animal(t)
{
	__brain = new Brain(*t.__brain);
	this->__type = t.__type;
	std::cout << "Cat Copy constructor called\n";
}

Cat&	 Cat::operator=(const Cat& t)
{
	if (this != &t)
	{
		__brain = t.__brain;
		this->__type = t.__type;
	}
	std::cout << "Cat Copy assignment operator called\n";
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow\n";
}

void	Cat::setIdeas(std::string str)
{
	__brain->setIdeas(str);
}

void	Cat::setIdea(int i, std::string str)
{
	__brain->setIdea(i, str);
}

std::string	Cat::getIdea(int i) const
{
	return (__brain->getIdea(i));
}
