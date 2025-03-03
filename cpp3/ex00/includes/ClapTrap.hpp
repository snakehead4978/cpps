/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 22:37:50 by snek              #+#    #+#             */
/*   Updated: 2025/03/03 22:50:29 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H
# define __CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string	__name;
		int			__hp;
		int			__mana;
		int			__str;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& t);
		ClapTrap&	operator=(const ClapTrap& t);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
