/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:20:42 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 17:41:33 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H
# define __CAT_H

# include "Animal.hpp"

# include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& t);
		Cat&	operator=(const Cat& t);
		~Cat();
		void	makeSound() const;
};

#endif
