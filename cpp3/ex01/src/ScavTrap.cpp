/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:28:55 by jla-chon          #+#    #+#             */
/*   Updated: 2025/03/04 18:32:53 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) { std::cout << "Default constructor called\n"; }

ScavTrap::~ScavTrap() { std::cout << "Destructor called\n"; }

ScavTrap::ScavTrap(const ScavTrap& t) { std::cout << "Copy constructor called\n"; }

ScavTrap&	 ScavTrap::operator=(const ScavTrap& t)
{
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

static bool	status(int hp, int mana, std::string name)
{
	if (hp > 0 && mana > 0)
		return (false);
	if (hp <= 0)
		std::cout << "Scavtrap " << name << " needs healing.\n";
	else
		std::cout << "Scavtrap " << name << " is out of energy!\n";
	return (true);
}

void	ScavTrap::attack(const std::string& target)
{
	if (status(this->__hp, this->__hp, this->__name))
		return ;
	this->__mana--;
	std::cout << "Scavtrap " << this->__name;
	std::cout << "attacks " << target;
	std::cout << ", causing " << this->__str;
	std::cout << " points of damage!\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->__hp <= 0)
	{
		std::cout << "Stop! Scavtrap " << this->__name << " is already dead! But sadly it still takes " << amount << " damage.\n";
		return ;
	}
	this->__hp -= amount;
	std::cout << "Scavtrap" << this->__name << "takes " << amount << " damage ";
	if (this->__hp <= 0)
		std::cout << "and is ready for decommission!";
	std::cout << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (status(this->__hp, this->__mana, this->__name))
		return ;
	this->__mana--;
	std::cout << "Scavtrap " << this->__name;
	std::cout << "heals itself for " << amount << " health.\n";
	this->__hp += amount;
}
\
