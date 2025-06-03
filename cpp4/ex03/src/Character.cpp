/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:26:02 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/03 12:02:14 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : __name("tempName")
{
	for (int i = 0; i < 4; i++)
		__inventory[i] = 0;
}

Character::Character(std::string name) : __name(name)
{ 
	for (int i = 0; i < 4; i++)
		__inventory[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete __inventory[i];
}

Character::Character(const Character& t) : __name(t.__name)
{
	for (int i = 0; i < 4; i++)
		delete __inventory[i];
	for (int i = 0; i < 4; i++)
	{
		if (t.__inventory[i])
			__inventory[i] = t.__inventory[i]->clone();
		else
			__inventory[i] = 0;
	}
}

Character&	 Character::operator=(const Character& t)
{
	if (this != &t)
	{
		__name = t.__name;
		for (int i = 0; i < 4; i++)
			delete __inventory[i];
		for (int i = 0; i < 4; i++)
		{
			if (t.__inventory[i])
				__inventory[i] = t.__inventory[i]->clone();
			else
				__inventory[i] = 0;
		}
	}
	return (*this);
}

std::string	const&	Character::getName() const
{
	return (__name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "Not a spell!\n";
		return ;
	}
	int	i = 0;
	while (i < 4 && __inventory[i])
		i++;
	if (i == 4)
	{
		std::cout << "All spell slots are filled!\n";
		return ;
	}
	__inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid slot number.\n";
		return;
	}
	if (__inventory[idx])
		__inventory[idx] = 0;
	else
		std::cout << "No spells learnt in that slot.\n";
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid slot number.\n";
		return;
	}
	if (!__inventory[idx])
		std::cout << "No spells learnt in that slot.\n";
	else
		__inventory[idx]->use(target);
}
