/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:09:53 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/18 03:19:26 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _data() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &t) : _data(t._data) {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &t)
{
	if (this != &t)
	{
		_data.clear();
		_data = t._data;
	}
	return (*this);
}

void	BitcoinExchange::setEntry(std::string date, double num)
{
	try
	{
		Date	d(date);
		std::pair<Date, double>p(d, num);
		if (!_data.insert(p).second)
			throw std::invalid_argument("Duplicate dates.");
	}
	catch(const std::exception& e)
	{
		if (static_cast<std::string>(e.what()) == "Duplicate dates.")
			throw e;
		std::cerr << "Error: " << e.what() << '\n';
		return ;
	}
}

double	BitcoinExchange::getEntry(const Date &date) const
{
	if (date < _data.begin()->first)
		throw std::out_of_range("Bitcoin has not been invented yet.");
	bool	equal = _data.count(date);
	std::map<Date, double>::const_iterator	num = _data.lower_bound(date);
	if (equal)
		return (num->second);
	return ((--num)->second);
}
