/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:47:05 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/03 12:02:32 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void basicTest()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;	
}

void moreTests()
{
	std::cout << "\nCreate a new materia source and overload it with ice\n";
	IMateriaSource*	spellbag = new MateriaSource();
	Ice *ices[5];
	for (int i = 0; i < 5; i++)
		ices[i] = new Ice();
	for (int i = 0; i < 5; i++)
		spellbag->learnMateria(ices[i]);
	std::cout << "\nCreating new char npc1 and overloading with ice\n";
	ICharacter *npc1 = new Character("me");
	for (int i = 0; i < 5; i++)
		npc1->equip(ices[i]);
	std::cout << "\nTesting wrong materia in spellbag and npc1\n";
	npc1->equip(0);
	spellbag->createMateria("hi");
	spellbag->learnMateria(0);
	std::cout << "\nDeleting npc1\n";
	delete npc1;
	std::cout << "\nDeleting bag\n";
	delete spellbag;
	std::cout << "\nDeleting all ices\n";
	// for (int i = 0; i < 5; i++)
		// delete ices[i];
	delete ices[4];
}

int	main()
{
	// basicTest();
	std::cout << "\nMore tests\n";
	moreTests();
	return 0;
}
