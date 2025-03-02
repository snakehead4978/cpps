/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:37:20 by snek              #+#    #+#             */
/*   Updated: 2025/03/02 19:05:10 by snek             ###   ########.fr       */
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
		void	operator<<(std::ostream ost);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

#endif
