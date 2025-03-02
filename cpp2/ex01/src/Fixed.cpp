/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:27:34 by snek              #+#    #+#             */
/*   Updated: 2025/03/02 22:20:10 by snek             ###   ########.fr       */
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
	*this = t;
}

Fixed&	 Fixed::operator=(const Fixed& t)
{
	std::cout << "Copy assignment operator called\n";
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

// Added functions from ex00

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called\n";
	this->__value = value;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called\n";
	this->__value = (int)roundf(value);
}

void	Fixed::operator<<(std::ostream ost);

float	Fixed::toFloat() const;

int		Fixed::toInt() const
{
	std::cout << this->__value;
}

