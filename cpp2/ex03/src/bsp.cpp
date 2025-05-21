/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:53:11 by snek              #+#    #+#             */
/*   Updated: 2025/05/21 18:06:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	triangle_area(Point const a, Point const b, Point const c)
{
	float	area;
	float	var2(b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()));
	float	var1(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()));
	float	var3(c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()));
	
	area = (var1 + var2 + var3) / 2;
	// Fixed	area = (var1 + var2 + var3) / 2;
	if (area < 0)
		return (area * -1);
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	area = triangle_area(a, b, c);
	float	areaABP = triangle_area(a, b, point);
	float	areaACP = triangle_area(a, c, point);
	float	areaBCP = triangle_area(b, c, point);

	if (area == 0)
	{
		std::cout << "The three points makes a line.\n";
		return (false);
	}
	if ( areaABP * areaACP * areaBCP == 0)
		return (false);
	if (areaABP + areaACP + areaBCP == area)
		return (true);
	return (false);
}
