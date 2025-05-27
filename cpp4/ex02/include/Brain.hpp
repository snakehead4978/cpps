/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:11:55 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 18:31:26 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H
# define __BRAIN_H

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string	__ideas[100];
	public:
		Brain();
		Brain(std::string);
		Brain(const Brain& t);
		Brain&	operator=(const Brain& t);
		~Brain();
		void		setIdeas(std::string);
		void		setIdea(int, std::string);
		std::string	getIdea(int) const;
};

#endif
