/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:27:01 by snek              #+#    #+#             */
/*   Updated: 2025/02/28 10:02:50 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H
# define __HUMANB_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*__weapon;
		std::string	__name;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif