/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 22:35:16 by snek              #+#    #+#             */
/*   Updated: 2025/05/29 20:26:10 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug() { std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n"; }

void	Harl::info() { std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"; }

void	Harl::warning() { std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n"; }

void	Harl::error() { std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n"; }

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptrs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complaints[i] == level)
		{
			(this->*ptrs[i])();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}

void	Harl::filter(std::string level)
{
	std::string	complaints[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			intlevel;

	if (level == "EXIT")
		return ;
	intlevel = -1;
	for (int i = 0; i < 4; i++)
	{
		if (complaints[i] == level)
			intlevel = i;
	}
	switch (intlevel)
	{
		case 0:
			debug();
			__attribute__((fallthrough));
		case 1:
			info();
			__attribute__((fallthrough));
		case 2:
			warning();
			__attribute__((fallthrough));
		case 3:
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
