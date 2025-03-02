/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:37:20 by snek              #+#    #+#             */
/*   Updated: 2025/03/02 16:41:10 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H
# define __FIXED_H

# include <iostream>


class Fixed
{
	private:
		int	__value;
		static int	const __eight = 8;
	public:
		Fixed();
		Fixed(const Fixed& t);
		Fixed&	operator=(const Fixed& t);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif
