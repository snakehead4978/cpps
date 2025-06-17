/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:09:53 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/17 13:06:35 by jeremie          ###   ########.fr       */
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
		_data.insert(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ;
	}
}

double	BitcoinExchange::getEntry(const Date &date) const
{
	std::map<Date, double>::const_iterator	num = _data.lower_bound(date);
	return (num->second);
}
