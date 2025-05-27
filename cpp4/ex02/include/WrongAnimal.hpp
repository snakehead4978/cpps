/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:44:17 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 17:45:49 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H
# define __WRONGANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string __type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& t);
		WrongAnimal&	operator=(const WrongAnimal& t);
		virtual	~WrongAnimal();
		virtual void	makeSound() const;
		std::string	getType() const;
		void	setType(std::string type);
};

#endif