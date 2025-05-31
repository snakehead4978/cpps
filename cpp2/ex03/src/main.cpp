/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:01:14 by snek              #+#    #+#             */
/*   Updated: 2025/05/31 03:06:35 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main()
{
	// bool	inside = bsp(Point(-4.38, 2.57), Point(7.12, -0.14), Point(-3.22, -6.73), Point(-1.11, -1.38));
	Point	a(7, 6);
	Point	b(13, 6);
	Point	c(7, 3);
	Point	point(10, 5.99);
	bool	inside = bsp(a, b, c, point);
	
	std::cout << "Point a is x:" << a.getX() << " y:" << a.getY() << std::endl;
	std::cout << "Point b is x:" << b.getX() << " y:" << b.getY() << std::endl;
	std::cout << "Point c is x:" << c.getX() << " y:" << c.getY() << std::endl;
	std::cout << "Point point is x:" << point.getX() << " y:" << point.getY() << std::endl;


	std::cout << "The point is ";
	if (!inside)
		std::cout << "not ";
	std::cout << "inside the triangle.\n";
	return (0);
}
