/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:52:20 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 18:05:52 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() { std::cout << "WrongCat Default constructor called\n"; }

WrongCat::~WrongCat() { std::cout << "WrongCat Destructor called\n"; }

WrongCat::WrongCat(const WrongCat& t) : WrongAnimal(t)
{
	this->__type = t.__type;
	std::cout << "WrongCat Copy constructor called\n";
}

WrongCat&	 WrongCat::operator=(const WrongCat& t)
{
	if (this != &t)
	{
		this->__type = t.__type;
	}
	std::cout << "WrongCat Copy assignment operator called\n";
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "mEoW\n";
}
