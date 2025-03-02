/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:41:51 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 22:33:33 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) { _name = name; }

Zombie::~Zombie() { std::cout << "*BANG* Headshot!" << std::endl; }

Zombie::Zombie() {}

void	Zombie::announce() { std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

void	Zombie::knight(std::string name) { _name = name; }
