/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.d>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:29:35 by snek              #+#    #+#             */
/*   Updated: 2025/06/02 16:58:13 by jla-chon         ###   ########.d       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{

	std::cout << "Creation of d1 and takes 30 dmg\n";
	DiamondTrap	*dia1  = new DiamondTrap("d1");
	std::cout << "Health :" << dia1->getHp() << ", Energy :" << dia1->getMana() << ", Strength:" << dia1->getStr() << std::endl;
	dia1->takeDamage(30);

	std::cout << "\nCreation of d2 with copy constructor d1 and change name to d2\n";
	DiamondTrap	*dia2 = new DiamondTrap(*dia1);
	dia2->setName("d2");

	std::cout << "\nTesting utilities on d1\n";
	std::cout << "dia1 health:" << dia1->getHp() << std::endl;
	dia1->attack("me");
	dia1->guardGate();
	dia1->highFivesGuys();
	dia1->whoAmI();
	dia1->takeDamage(80);
	dia1->highFivesGuys();
	std::cout << "dia1 health:" << dia1->getHp() << std::endl;

	std::cout << "\nCreation of d3 with copy assignment and change name to d3\n";
	DiamondTrap	*dia3 = new DiamondTrap();
	*dia3 = *dia2;
	dia3->setName("d3");
	dia2->beRepaired(5);
	std::cout << "dia2 hp:" << dia2->getHp() << "; dia3 hp:" << dia3->getHp() << std::endl;

	dia2->whoAmI();
	dia3->whoAmI();
	std::cout << "\nDestruction of d1\n";
	delete dia1;
	std::cout << "\nDestruction of d2\n";
	delete dia2;
	std::cout << "\nDestruction of d3\n";
	delete dia3;
	return (0);
}
