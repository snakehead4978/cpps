/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:47:22 by snek              #+#    #+#             */
/*   Updated: 2025/03/03 21:58:09 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float p1, const float p2) : x(p1), y(p2) {}

Point::~Point() {}

Point::Point(const Point& t) : x(t.getX()), y(t.getY()) { *this = t; }

Point&	 Point::operator=(const Point& t)
{
	if (this == &t)
		new	(this)Point(t.getX().toFloat(), t.getY().toFloat());
	return (*this);
}

Fixed	Point::getX() const { return (this->x) ;}

Fixed	Point::getY() const { return (this->y) ;}
