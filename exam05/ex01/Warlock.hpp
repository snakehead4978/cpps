/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:21:11 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 15:04:47 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
# define WARLOCK_H

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		ASpell	*_spell;
		Warlock &operator=(Warlock const &t);
		Warlock(Warlock const &t);
		
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		const std::string &getName() const;
		const std::string &getTitle() const;
		void	introduce() const;
		void	setTitle(const std::string &str);
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string name);
		void	launchSpell(std::string name, ATarget &target);
		
};



#endif