/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 21:08:23 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 21:57:26 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_H
# define __IMATERIASOURCE_H

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{		
	public:
		virtual	~IMateriaSource() {};
		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif
