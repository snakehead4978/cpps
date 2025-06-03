/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:21:11 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 12:40:37 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
# define WARLOCK_H

# include <iostream>
# include <string>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock &operator=(Warlock const &t);
		Warlock(Warlock const &t);
		
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		const std::string &getName() const;
		const std::string &getTitle() const;
		void	introduce() const;
		void	setTitle(const std::string &str);
};



#endif