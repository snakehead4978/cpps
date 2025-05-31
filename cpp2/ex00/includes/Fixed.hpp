/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:37:20 by snek              #+#    #+#             */
/*   Updated: 2025/05/30 17:29:28 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H
# define __FIXED_H

# include <iostream>


class Fixed
{
	private:
		int	__value;
		static int	const __eight;
	public:
		Fixed();
		Fixed(const Fixed& t);
		Fixed&	operator=(const Fixed& t);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif
