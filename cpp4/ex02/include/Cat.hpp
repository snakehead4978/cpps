/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:20:42 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/03 11:25:04 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H
# define __CAT_H

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
	private:
		Brain	*__brain;
	public:
		Cat();
		Cat(const Cat& t);
		Cat&	operator=(const Cat& t);
		virtual	~Cat();
		void	makeSound() const;
		void		setIdeas(std::string);
		void		setIdea(int, std::string);
		std::string	getIdea(int) const;
};

#endif
