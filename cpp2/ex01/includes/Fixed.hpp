/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:37:20 by snek              #+#    #+#             */
/*   Updated: 2025/05/31 01:39:27 by jeremie          ###   ########.fr       */
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
		Fixed();
		Fixed(const Fixed& t);
		Fixed(int const value);
		Fixed(float const value);
		Fixed&	operator=(const Fixed& t);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream	&operator<<(std::ostream &ost, Fixed const &t);

#endif
