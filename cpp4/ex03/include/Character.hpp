/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:19:37 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 21:45:56 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H
# define __CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"
# include <string>

class Character : public ICharacter
{
	private:
		std::string	__name;
		AMateria	*__inventory[4];
	public:
		Character();
		Character(std::string);
		Character(const Character& t);
		Character&	operator=(const Character& t);
		~Character();
		std::string const &getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif
