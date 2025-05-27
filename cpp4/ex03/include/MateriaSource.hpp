/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 21:10:40 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 21:11:29 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H
# define __MATERIASOURCE_H

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*__inventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& t);
		MateriaSource&	operator=(const MateriaSource& t);
		~MateriaSource();
		void	learnMateria(AMateria*);
		AMateria	*createMateria(std::string const &type);
};

#endif
