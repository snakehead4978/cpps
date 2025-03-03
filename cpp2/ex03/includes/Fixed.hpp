/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:37:20 by snek              #+#    #+#             */
/*   Updated: 2025/03/03 18:27:43 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H
# define __FIXED_H

# include <cmath>
# include <iostream>

class Fixed
{
	private:
		int	__value;
		static int const	__bits;
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed& t);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();
		// Getter and Setter
		int		getRawBits() const;
		void	setRawBits(int const raw);
		// Conversion funcs
		float	toFloat() const;
		int		toInt() const;
		// Overload arithmetic operators
		Fixed&	operator=(const Fixed& t);
		Fixed	operator+(const Fixed& t);
		Fixed	operator-(const Fixed& t);
		Fixed	operator*(const Fixed& t);
		Fixed	operator/(const Fixed& t);
		// Overload comparison operators
		bool	operator>(const Fixed& t);
		bool	operator<(const Fixed& t);
		bool	operator>=(const Fixed& t);
		bool	operator<=(const Fixed& t);
		bool	operator==(const Fixed& t);
		bool	operator!=(const Fixed& t);
		// Increment
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		// Min-Maxing
		static Fixed&	min(Fixed &t1, Fixed &t2);
		static Fixed&	max(Fixed &t1, Fixed &t2);
		static const Fixed&	min(const Fixed &t1, const Fixed &t2);
		static const Fixed&	max(const Fixed &t1, const Fixed &t2);
};

std::ostream	&operator<<(std::ostream &ost, Fixed const &t);

#endif
