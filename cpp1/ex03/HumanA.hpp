/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:16:30 by snek              #+#    #+#             */
/*   Updated: 2025/02/28 10:36:53 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H
# define __HUMANA_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&__weapon;
		std::string	__name;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif