/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:51:28 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 15:03:39 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_H
# define ATARGET_H

# include <iostream>
# include <string>
# include "ASpell.hpp"

class	ASpell;

class	ATarget
{
	protected:
		std::string _type;
	public:
		const std::string &getType() const;
		virtual ATarget	*clone() = 0;
		void	getHitBySpell(const ASpell &spell) const;
		ATarget();
		virtual ~ATarget();
		ATarget(std::string type);
};



#endif