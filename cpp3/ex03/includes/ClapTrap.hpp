/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 22:37:50 by snek              #+#    #+#             */
/*   Updated: 2025/05/27 01:01:13 by jeremie          ###   ########.fr       */
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
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int mana, int str);
		ClapTrap(const ClapTrap& t);
		ClapTrap&	operator=(const ClapTrap& t);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		// getters
		std::string	getName(void) const;
		int			getHp(void) const;
		int			getMana(void) const;
		int			getStr(void) const;
		// setters
		void		setName(std::string name);
		void		setHp(int hp);
		void		setMana(int mana);
		void		setStr(int str);
};

#endif
