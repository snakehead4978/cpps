/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:00:24 by snek              #+#    #+#             */
/*   Updated: 2025/02/28 09:58:09 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H
# define _WEAPON_H
# include <string>

class Weapon
{
	private:
		std::string	__type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string	const	&getType();
		void	setType(std::string type);
};

#endif