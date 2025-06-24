/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:08:15 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/24 17:02:44 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _list() {}

Span::Span(unsigned int n) : _size(n), _list() {}

Span::~Span() {}

Span::Span(const Span &t) : _size(t._size), _list(t._list) {}

Span	&Span::operator=(const Span &t)
{
	if (this != &t)
	{
		// _list.clear();
		_list = t._list;
		_size = t._size;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_list.size() >= _size)
		throw std::out_of_range("List is already at max size.");
	_list.push_back(num);
}

int	Span::shortestSpan()
{
	if (_list.size() <= 1)
		throw std::out_of_range("List contains less than 2 elements.");
	std::sort(_list.begin(), _list.end());
	std::vector<int>	v(_list.size(), 0);
	std::adjacent_difference(_list.begin(), _list.end(), v.begin());
	return (*std::min_element(v.begin() + 1, v.end()));
}

int	Span::longestSpan()
{
	if (_list.size() <= 1)
		throw std::out_of_range("List contains less than 2 elements.");
	std::sort(_list.begin(), _list.end());
	return (_list.back() - _list.front());
}

// void	Span::addNumbers()
