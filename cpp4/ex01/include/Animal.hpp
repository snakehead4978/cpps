/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:06:09 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 17:33:34 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H
# define __ANIMAL_H

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string	__type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& t);
		Animal&	operator=(const Animal& t);
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string	getType() const;
		void	setType(std::string type);
};

#endif
