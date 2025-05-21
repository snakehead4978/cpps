/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:01:14 by snek              #+#    #+#             */
/*   Updated: 2025/03/04 15:56:06 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main()
{
	bool	inside = bsp(Point(-4.38, 2.57), Point(7.12, -0.14), Point(-3.22, -6.73), Point(-1.11, -1.38));
	std::cout << "The point is ";
	if (!inside)
		std::cout << "not ";
	std::cout << "inside the triangle.\n";
	return (0);
}
