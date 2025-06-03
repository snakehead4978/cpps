/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:19:26 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/03 11:18:33 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		__ideas[i] = "none";
	std::cout << "Brain Default constructor called\n";
}

Brain::Brain(std::string str)
{
	for (int i = 0; i < 100; i++)
		__ideas[i] = str;
	std::cout << "Brain constructor for " << str << " called\n";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor for " << getIdea(0) << " called\n";
}

Brain::Brain(const Brain& t)
{
	for (int i = 0; i < 100; i++)
		__ideas[i] = t.__ideas[i];
	std::cout << "Brain Copy constructor for " << getIdea(0) << " called\n";
}

Brain&	 Brain::operator=(const Brain& t)
{
	if (this != &t)
	{
		for (int i = 0; i < 100; i++)
			__ideas[i] = t.__ideas[i];
	}
	std::cout << "Brain Copy assignment operator for " << getIdea(0) << " called\n";
	return (*this);
}

void	Brain::setIdeas(std::string str)
{
	for (int i = 0; i < 100; i++)
		__ideas[i] = str;
}

void	Brain::setIdea(int i, std::string str)
{
	if (i < 100 && i >= 0)
		__ideas[i] = str;
	else
		std::cout << "Int outside of index\n";
}

std::string	Brain::getIdea(int i) const
{
	if (i < 100 && i >= 0)
		return (__ideas[i]);
	std::cout << "Int outside of index\n";
	return ("replacement value");
}
