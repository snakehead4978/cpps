/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:01:14 by snek              #+#    #+#             */
/*   Updated: 2025/05/31 23:36:47 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	
	// Fixed c(3.1f);
	// Fixed d(4.2f);
	// std::cout << "Fixed c:" << c << " and d:" << d << std::endl;
	// std::cout << (c < d) << std::endl;
	// std::cout << (c > d) << std::endl;
	// std::cout << (c <= d) << std::endl;
	// std::cout << (c >= d) << std::endl;
	// std::cout << (c == d) << std::endl;
	// std::cout << c + d << std::endl;
	// std::cout << c - d << std::endl;
	// std::cout << c * d << std::endl;
	// std::cout << c / d << std::endl;
	return 0;
}
