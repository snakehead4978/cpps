/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 22:46:18 by snek              #+#    #+#             */
/*   Updated: 2025/06/01 18:22:38 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : __name("No Name"), __hp(10), __mana(10), __str(0) { std::cout << "Claptrap Default constructor called\n"; }

ClapTrap::ClapTrap(std::string name) : __name(name), __hp(10), __mana(10), __str(0) { std::cout << "Claptrap overloaded constructor called\n"; }

ClapTrap::ClapTrap(std::string name, int hp, int mana, int str) : __name(name), __hp(hp), __mana(mana), __str(str) { std::cout << "Claptrap overloaded constr called\n"; }

ClapTrap::~ClapTrap() { std::cout << "Claptrap Destructor called\n"; }

ClapTrap::ClapTrap(const ClapTrap& t)
{
	std::cout << "Claptrap Copy constructor called\n";
	__name = t.__name;
	__hp = t.__hp;
	__mana = t.__mana;
	__str = t.__str;
	// *this = t;
}

ClapTrap&	 ClapTrap::operator=(const ClapTrap& t)
{
	std::cout << "Claptrap Copy assignment operator called\n";
	if (this != &t)
	{
		this->__name = t.__name;
		this->__hp = t.__hp;
		this->__mana = t.__mana;
		this->__str = t.__str;
	}
	return (*this);
}

static bool	status(int hp, int mana, std::string name)
{
	if (hp > 0 && mana > 0)
		return (false);
	if (hp <= 0)
		std::cout << "ClapTrap " << name << " needs healing.\n";
	else
		std::cout << "ClapTrap " << name << " is out of energy!\n";
	return (true);
}

void	ClapTrap::attack(const std::string& target)
{
	if (status(this->__hp, this->__mana, this->__name))
		return ;
	this->__mana--;
	std::cout << "ClapTrap " << this->__name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->__str;
	std::cout << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->__hp <= 0)
	{
		std::cout << "Stop! ClapTrap " << this->__name << " is already dead! But sadly it still takes " << amount << " damage.\n";
		this->__hp -= amount;
		return ;
	}
	this->__hp -= amount;
	std::cout << "ClapTrap " << this->__name << " takes " << amount << " damage ";
	if (this->__hp <= 0)
		std::cout << "and is ready for decommission!";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (status(this->__hp, this->__mana, this->__name))
		return ;
	this->__mana--;
	std::cout << "ClapTrap " << this->__name;
	std::cout << " heals itself for " << amount << " health.\n";
	this->__hp += amount;
}

std::string	ClapTrap::getName(void) const { return this->__name; }

int	ClapTrap::getHp(void) const { return this->__hp; }

int	ClapTrap::getMana(void) const { return this->__mana; }

int	ClapTrap::getStr(void) const { return this->__str; }

void	ClapTrap::setName(std::string name) { this->__name = name; }

void	ClapTrap::setHp(int hp) { this->__hp = hp; }

void	ClapTrap::setMana(int mana) { this->__mana = mana; }

void	ClapTrap::setStr(int str) { this->__str = str; }
