/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:55:08 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 19:56:21 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H
# define __ICE_H

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& t);
		Ice&	operator=(const Ice& t);
		~Ice();
		AMateria	*clone() const;
		void		use(ICharacter& target);
};

#endif
