/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:29:35 by snek              #+#    #+#             */
/*   Updated: 2025/06/01 17:30:39 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::cout << "Creation of first claptrap 'ct1' and it takes 5 dmg\n";
	ClapTrap	clap1("ct1");
	clap1.takeDamage(5);
	std::cout << "\n\nCreation of second claptrap with copy constructor from ct1 and attacks 'qtn'\n";
	ClapTrap	clap2(clap1);
	clap2.attack("qtn");
	std::cout << "\n\nClaptrap ct1 heals itself for 10\n";
	clap1.beRepaired(10);
	std::cout << "\n\nCreation of third claptrap then copy assigned from ct2 and repaired for 3\n";
	ClapTrap	clap3;
	clap3 = clap2;
	clap3.beRepaired(3);
	std::cout << "\nClap1 health:" << clap1.getHp() << ", Clap2 health:" << clap2.getHp() << ", Clap3 health:" << clap3.getHp() << std::endl;
	return (0);
}
