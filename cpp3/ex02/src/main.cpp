/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:29:35 by snek              #+#    #+#             */
/*   Updated: 2025/06/02 17:00:12 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main()
{
	std::cout << "Creation of fr1 and takes 30 dmg\n";
	FragTrap	*frag1  = new FragTrap("fr1");
	frag1->takeDamage(30);

	std::cout << "\nCreation of fr2 with copy constructor fr1 and change name to fr2\n";
	FragTrap	*frag2 = new FragTrap(*frag1);
	frag2->setName("fr2");

	std::cout << "\nTesting utilities on fr1\n";
	std::cout << "Frag1 health:" << frag1->getHp() << std::endl;
	frag1->highFivesGuys();
	frag1->takeDamage(80);
	frag1->highFivesGuys();
	std::cout << "Frag1 health:" << frag1->getHp() << std::endl;

	std::cout << "\nCreation of fr3 with copy assignment and change name to fr3\n";
	FragTrap	*frag3 = new FragTrap();
	*frag3 = *frag2;
	frag3->setName("fr3");
	frag2->beRepaired(5);
	std::cout << "Frag2 hp:" << frag2->getHp() << "; Frag3 hp:" << frag3->getHp() << std::endl;
	
	std::cout << "\nDestruction of fr1\n";
	delete frag1;
	std::cout << "\nDestruction of fr2\n";
	delete frag2;
	std::cout << "\nDestruction of fr3\n";
	delete frag3;
	
	return (0);
}
