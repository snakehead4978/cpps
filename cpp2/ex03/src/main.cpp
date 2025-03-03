/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:01:14 by snek              #+#    #+#             */
/*   Updated: 2025/03/03 21:25:07 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main()
{
	bool	inside = bsp(Point(-4.38, 2.57), Point(7.12, -0.14), Point(-3.22, -6.73), Point(-1.86, -1.57));
	std::cout << "The point is ";
	if (!inside)
		std::cout << "not ";
	std::cout << "inside the triangle.\n";
	return (0);
}
