/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:25:05 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 17:41:37 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H
# define __DOG_H

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& t);
		Dog&	operator=(const Dog& t);
		~Dog();
		void	makeSound() const;
};

#endif
