/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:24:55 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 15:07:45 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title), _spell(0)
{
	std::cout << _name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	delete _spell;
	std::cout << _name << ": My job here is done!\n";
}

const std::string &Warlock::getName() const
{
	return (_name);
}

const std::string &Warlock::getTitle() const
{
	return (_title);
}

void	Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

void	Warlock::setTitle(const std::string &str)
{
	_title = str;
}

void	Warlock::learnSpell(ASpell *spell)
{
	_spell = spell;
}

void	Warlock::forgetSpell(std::string name)
{
	if (!_spell)
		return ;
	if (_spell->getName() == name)
	{
		delete _spell;
		_spell = 0;
	}
}

void	Warlock::launchSpell(std::string name, ATarget &target)
{
	if (!_spell)
		return ;
	if (_spell->getName() == name)
		_spell->launch(target);
}
