/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:56:34 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 19:59:49 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H
# define __CURE_H

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& t);
		Cure&	operator=(const Cure& t);
		~Cure();
		AMateria	*clone() const;
		void		use(ICharacter& target);
};

#endif
