/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:25:05 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 19:12:34 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H
# define __DOG_H

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*__brain;
	public:
		Dog();
		Dog(const Dog& t);
		Dog&	operator=(const Dog& t);
		~Dog();
		void	makeSound() const;
		void		setIdeas(std::string);
		void		setIdea(int, std::string);
		std::string	getIdea(int) const;
};

#endif
