/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:42:19 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 14:36:14 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_H
# define ASPELL_H

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string _name;
		std::string _effects;
	public:
		const std::string &getName() const;
		const std::string &getEffects() const;
		virtual ASpell	*clone() = 0;
		void	launch(const ATarget &target) const;
		ASpell();
		virtual ~ASpell();
		ASpell(std::string name, std::string effect);
};

#endif