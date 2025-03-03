/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:53:11 by snek              #+#    #+#             */
/*   Updated: 2025/03/03 21:58:56 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	triangle_area(Point const a, Point const b, Point const c)
{
	Fixed	var1(a.getX() * (b.getY() - c.getY()));
	Fixed	var2(b.getX() * (c.getY() - a.getY()));
	Fixed	var3(c.getX() * (a.getY() - b.getY()));
	
	Fixed	area = (var1 + var2 + var3) / 2;
	if (area < 0)
		return (area * -1);
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area = triangle_area(a, b, c);
	Fixed	areaABP = triangle_area(a, b, point);
	Fixed	areaACP = triangle_area(a, c, point);
	Fixed	areaBCP = triangle_area(b, c, point);
	if (area == 0)
	{
		std::cout << "The three points makes a line.\n";
		return (false);
	}
	if ( areaABP * areaACP * areaBCP == 0)
		return (false);
	if (areaABP > area)
		return (false);
	if (areaABP > area)
		return (false);
	if (areaABP > area)
		return (false);
	return (true);
}
