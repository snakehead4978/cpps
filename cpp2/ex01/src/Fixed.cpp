/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:27:34 by snek              #+#    #+#             */
/*   Updated: 2025/05/31 23:28:15 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::__bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	__value = 0;
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }

Fixed::Fixed(const Fixed& t)
{
	std::cout << "Copy constructor called\n";
	// like subject
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
	// std::cout << "getRawBits member function called\n";
	return (__value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called\n";
	this->__value = raw;
}

// Added functions

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called\n";
	this->__value = value << this->__bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called\n";
	this->__value = roundf(value * (1 << this->__bits));
}

float	Fixed::toFloat() const
{
	return	((float)this->__value / (float)(1 << this->__bits));
}

int		Fixed::toInt() const
{
	return (this->__value >> this->__bits);;
}


std::ostream	&operator<<(std::ostream &ost, Fixed const &t)
{
	ost << t.toFloat();
	return (ost);
}
