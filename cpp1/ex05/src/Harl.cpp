/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 22:35:16 by snek              #+#    #+#             */
/*   Updated: 2025/05/29 20:25:08 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug() { std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n"; }

void	Harl::info() { std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n"; }

void	Harl::warning() { std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n\n"; }

void	Harl::error() { std::cout << "This is unacceptable! I want to speak to the manager now.\n\n"; }

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptrs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (level == "EXIT")
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (complaints[i] == level)
		{
			(this->*ptrs[i])();
			return ;
		}
	}
	std::cout << "*Generational crash out ensues*\n\n";
}
