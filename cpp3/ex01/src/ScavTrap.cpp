/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:28:55 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/02 16:29:54 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("No Name", 100, 50, 20) { std::cout << "Scav constructor called\n"; }

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) { std::cout << "Scav overload constructor called\n"; }

ScavTrap::~ScavTrap() { std::cout << "Scav Destructor called\n"; }

ScavTrap::ScavTrap(const ScavTrap& t): ClapTrap(t.getName(), t.getHp(), t.getMana(), t.getStr())
{
	std::cout << "Scav Copy constructor called\n";
}

ScavTrap&	 ScavTrap::operator=(const ScavTrap& t)
{
	std::cout << "Scav Copy assignment operator called\n";
	if (this != &t)
	{
		this->setName(t.getName());
		this->setHp(t.getHp());
		this->setMana(t.getMana());
		this->setStr(t.getStr());
	}
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
	if (status(this->getHp(), this->getMana(), this->getName()))
		return ;
	this->setMana(this->getMana() - 1);
	std::cout << "Scavtrap " << this->getName();
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->getStr();
	std::cout << " points of damage!\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->getHp() <= 0)
	{
		std::cout << "Stop! Scavtrap " << this->getName() << " is already dead! But sadly it still takes " << amount << " damage.\n";
		this->setHp(this->getHp() - amount);
		return ;
	}
	this->setHp(this->getHp() - amount);
	std::cout << "Scavtrap " << this->getName() << " takes " << amount << " damage";
	if (this->getHp() <= 0)
		std::cout << " and is ready for decommission!";
	std::cout << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (status(this->getHp(), this->getMana(), this->getName()))
		return ;
	this->setMana(this->getMana() - 1);
	std::cout << "Scavtrap " << this->getName();
	std::cout << " heals itself for " << amount << " health.\n";
	this->setHp(this->getHp() + amount);
}

void	ScavTrap::guardGate(void)
{
	if (this->getHp() <= 0)
		std::cout << "Scavtrap " << this->getName() << " is dead\n";
	else
		std::cout << "Scavtrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}
