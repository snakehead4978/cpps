/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:43:26 by snek              #+#    #+#             */
/*   Updated: 2025/03/03 21:45:09 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H
# define __POINT_H

# include "Fixed.hpp"
# include <iostream>

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point();
		Point(const float p1, const float p2);
		Point(const Point& t);
		Point&	operator=(const Point& t);
		Fixed	getX() const;
		Fixed	getY() const;
		~Point();
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
