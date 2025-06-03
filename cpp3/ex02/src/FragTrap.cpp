/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:22:47 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/02 16:50:04 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("No Name", 100, 100, 30) { std::cout << "Default Frag constructor for No Name called\n"; }

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) { std::cout << "Frag overloaded constructor for " << name << " called\n"; }

FragTrap::~FragTrap() { std::cout << "Frag Destructor for " << this->getName() << " called\n"; }

FragTrap::FragTrap(const FragTrap& t) : ClapTrap(t.getName(), t.getHp(), t.getMana(), t.getStr())
{
	std::cout << "Frag Copy constructor for " << t.getName() << " called\n";
}

FragTrap&	 FragTrap::operator=(const FragTrap& t)
{
	std::cout << "Frag Copy assignment operator for " << t.getName() << " called\n";
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
		std::cout << "FragTrap " << name << " needs healing.\n";
	else
		std::cout << "FragTrap " << name << " is out of energy!\n";
	return (true);
}

void	FragTrap::attack(const std::string& target)
{
	if (status(this->getHp(), this->getMana(), this->getName()))
		return ;
	this->setMana(this->getMana() - 1);
	std::cout << "FragTrap " << this->getName();
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->getStr();
	std::cout << " points of damage!\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->getHp() <= 0)
	{
		std::cout << "Stop! FragTrap " << this->getName() << " is already dead! But sadly it still takes " << amount << " damage.\n";
		this->setHp(this->getHp() - amount);
		return ;
	}
	this->setHp(this->getHp() - amount);
	std::cout << "FragTrap " << this->getName() << " takes " << amount << " damage";
	if (this->getHp() <= 0)
		std::cout << " and is ready for decommission!";
	std::cout << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (status(this->getHp(), this->getMana(), this->getName()))
		return ;
	this->setMana(this->getMana() - 1);
	std::cout << "FragTrap " << this->getName();
	std::cout << " heals itself for " << amount << " health.\n";
	this->setHp(this->getHp() + amount);
}

void	FragTrap::highFivesGuys()
{
	if (this->getHp() <= 0)
		std::cout << "FragTrap " << this->getName() << " is dead\n";
	else
		std::cout << "FragTrap " << this->getName() << " highfives itself!\n";
}
