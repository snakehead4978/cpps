/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:27:34 by snek              #+#    #+#             */
/*   Updated: 2025/05/31 23:25:09 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	const Fixed::__eight = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	__value = 0;
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }

Fixed::Fixed(const Fixed& t)
{
	std::cout << "Copy constructor called\n";
	// if same as subject uncomment below:
	// *this = t;
	__value = t.getRawBits();
}

Fixed&	 Fixed::operator=(const Fixed& t)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &t)
		this->__value = t.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (__value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->__value = raw;
}
