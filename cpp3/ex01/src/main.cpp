/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:29:35 by snek              #+#    #+#             */
/*   Updated: 2025/06/02 16:19:34 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	std::cout << "Creation of scav1 and attack br1\n";	
	ScavTrap	scav1("st1");
	scav1.attack("br1");
	
	std::cout << "\nCreation of scav2 with copy constructor from scav1 and scav2 takes 10 damage and set scav2 name to st2\n";
	ScavTrap	scav2(scav1);
	scav2.takeDamage(10);
	scav2.setName("st2");
	std::cout << "\nScav2 has " << scav2.getHp() << "health \n";
	
	std::cout << "\nCreation of scav3 with copy assignment from scav2, scav2 heals 20\n";
	ScavTrap	scav3;
	scav3 = scav2;
	scav2.beRepaired(20);
	
	std::cout << "\nScav2 health: " << scav2.getHp() << "; Scav3 health: " << scav3.getHp() << std::endl;
	
	
	std::cout << "\nScav3 named st3 and Scav3 guardguate\n";
	scav3.setName("st3");
	scav3.guardGate();
	return (0);
}
