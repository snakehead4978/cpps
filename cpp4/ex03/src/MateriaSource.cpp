/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 21:14:32 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/03 12:01:33 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		__inventory[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i ++)
		delete __inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource& t)
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

MateriaSource&	 MateriaSource::operator=(const MateriaSource& t)
{
	if (this != &t)
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

	return (*this);
}

void	MateriaSource::learnMateria(AMateria *spell)
{
	if (!spell)
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
	__inventory[i] = spell->clone();
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (__inventory[i])
		{
			if (__inventory[i]->getType() == type)
				return (__inventory[i]->clone());
		}
	}
	std::cout << "Spell with name " << type << " not found.\n";
	return (0);
}
