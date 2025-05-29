/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:29:35 by snek              #+#    #+#             */
/*   Updated: 2025/05/29 17:54:31 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	// // ClapTrap	clap1("ct1");
	// // clap1.takeDamage(50);
	// // ClapTrap	clap2(clap1);
	// // clap2.attack("qtn");
	// ScavTrap	scav1("st1");
	// scav1.attack("br1");
	// // ScavTrap	scav2(scav1);
	// // scav2.takeDamage(50);
	// // scav2.setName("st2");
	// // std::cout << scav2.getHp() << "health \n";
	// // scav2.guardGate();
	// FragTrap	frag1("fr1");
	// frag1.takeDamage(30);
	// std::cout << frag1.getHp() << std::endl;
	// frag1.highFivesGuys();
	// frag1.takeDamage(80);
	// frag1.takeDamage(15);
	// std::cout << frag1.getHp() << std::endl;
	// frag1.beRepaired(200);
	DiamondTrap dia1("d1");
	std::cout << dia1.getHp() << std::endl;
	std::cout << dia1.getMana() << std::endl;
	std::cout << dia1.getStr() << std::endl;
	dia1.whoAmI();
	return (0);
}
