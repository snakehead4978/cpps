/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:36:56 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 19:53:44 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H
# define __AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	__type;
	public:
		// basic funcs
		AMateria(std::string const &type);
		AMateria(const AMateria& t);
		AMateria&	operator=(const AMateria& t);
		~AMateria();
		// misc functions
		std::string const	&getType()	const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
