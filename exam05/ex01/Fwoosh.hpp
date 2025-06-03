/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:38:44 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 14:53:14 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_H
# define FWOOSH_H

# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh(const Fwoosh &t);
		Fwoosh &operator=(const Fwoosh &t);
		Fwoosh();
		~Fwoosh();
		ASpell	*clone();
};










#endif