/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:27:34 by snek              #+#    #+#             */
/*   Updated: 2025/05/31 02:14:39 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::__bits = 8;

Fixed::Fixed() { __value = 0; }

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& t) : __value(t.__value) { /* *this = t; */ }

Fixed&	 Fixed::operator=(const Fixed& t)
{
	if (this != &t)
		this->__value = t.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const { return (__value); }

void	Fixed::setRawBits(int const raw) { this->__value = raw; }

// Added functions ex01

Fixed::Fixed(int const value) { this->__value = value << this->__bits; }

Fixed::Fixed(float const value) { this->__value = roundf(value * (1 << this->__bits)); }

float	Fixed::toFloat() const { return ((float)this->__value / (float)(1 << this->__bits)); }

int		Fixed::toInt() const { return (this->__value >> this->__bits ); }

std::ostream	&operator<<(std::ostream &ost, Fixed const &t)
{
	ost << t.toFloat();
	return (ost);
}

// EX02

// Comparison
bool	Fixed::operator>(const Fixed&t) { return (toFloat() > t.toFloat()); }

bool	Fixed::operator<(const Fixed&t) { return (toFloat() < t.toFloat()); }

bool	Fixed::operator>=(const Fixed&t) { return (toFloat() >= t.toFloat()); }

bool	Fixed::operator<=(const Fixed&t) { return (toFloat() <= t.toFloat()); }

bool	Fixed::operator==(const Fixed&t) { return (toFloat() == t.toFloat()); }

bool	Fixed::operator!=(const Fixed&t) { return (toFloat() != t.toFloat()); }

// Arithmetic

Fixed	Fixed::operator+(const Fixed& t)
{
	Fixed	num(toFloat() + t.toFloat());
	return (num);
}

Fixed	Fixed::operator-(const Fixed& t)
{
	Fixed	num(toFloat() - t.toFloat());
	return (num);
}

Fixed	Fixed::operator*(const Fixed& t)
{
	Fixed	num(toFloat() * t.toFloat());
	return (num);
}

Fixed	Fixed::operator/(const Fixed& t)
{
	if (!t.__value)
	{
		std::cout << "Division by zero\n";
		return (0);
	}
	Fixed	num(toFloat() / t.toFloat());
	return (num);
}

// Increment

Fixed&	Fixed::operator++()
{
	this->__value++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->__value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->__value++;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->__value--;
	return (temp);
}

// Min-Maxing

Fixed&	Fixed::min(Fixed &t1, Fixed &t2)
{
	if (t1.toFloat() < t2.toFloat())
		return (t1);
	return (t2);
}

Fixed&	Fixed::max(Fixed &t1, Fixed &t2)
{
	if (t1.toFloat() > t2.toFloat())
		return (t1);
	return (t2);
}

const Fixed&	Fixed::min(const Fixed &t1, const Fixed &t2)
{
	if (t1.toFloat() < t2.toFloat())
		return (t1);
	return (t2);
}

const Fixed&	Fixed::max(const Fixed &t1, const Fixed &t2)
{
	if (t1.toFloat() > t2.toFloat())
		return (t1);
	return (t2);
}
