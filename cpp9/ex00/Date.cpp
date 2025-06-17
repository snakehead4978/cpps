/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:50:28 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/17 13:03:17 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"
#include <stdlib.h>
#include <limits>
#include <iomanip>

static struct tm	initDate()
{
	struct tm a;
	a.tm_hour = 0;
	a.tm_min = 0;
	a.tm_sec = 0;
	return (a);
}

struct	tm	Date::cDate = initDate();

static int	getNumber(const std::string &date, size_t &index, bool last)
{
	size_t	nextDash = date.find('-', index);
	if (!last && nextDash == date.npos)
		throw std::invalid_argument("Date incorrectly formatted.");
	long long num = atoll(date.substr(index, nextDash).c_str());
	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
		throw std::out_of_range("Number out of range.");
	index = nextDash + 1;
	return (num);
}

Date::Date(const std::string &date)
{
	if (!date.size())
		throw std::invalid_argument("String is empty.");
	size_t	index = 0;
	year = getNumber(date, index, 0);
	if (year <= 1900)
		throw std::out_of_range("At least choose a year greater than 1900.");
	month = getNumber(date, index, 0);
	if (month <= 0 || month > 12)
		throw std::out_of_range("Months are in between 1 and 12.");
	day = getNumber(date, index, 1);
	if (day <= 0 || day > 31)
		throw std::out_of_range("Days are in between 1 and 31.");
	struct tm	newDate;
	cDate.tm_year = year - 1900;
	cDate.tm_mon = month - 1;
	cDate.tm_mday = day;
	newDate = cDate;
	mktime(&newDate);
	if (cDate.tm_year != newDate.tm_year || cDate.tm_mon != newDate.tm_mon || cDate.tm_mday != newDate.tm_mday)
		throw std::invalid_argument("Invalid date.");
}

Date::~Date() {}

Date::Date(const Date &t) : year(t.year), month(t.month), day(t.day) {}

Date	&Date::operator=(const Date &t)
{
	if (this != &t)
	{
		year = t.year;
		month = t.month;
		day = t.day;
	}
	return (*this);
}

bool	operator>(const Date &a, const Date &b)
{
	return (!(a < b));
}

bool	operator<(const Date &a, const Date &b)
{
	if (a.getYear() < b.getYear())
		return (1);
	if (a.getYear() > b.getYear())
		return (0);
	if (a.getMonth() < b.getMonth())
		return (1);
	if (a.getMonth() > b.getMonth())
		return (0);
	if (a.getDay() < b.getDay())
		return (1);
	return (0);
}


int		Date::getYear() const { return (year); }

int		Date::getMonth() const { return (month); }

int		Date::getDay() const { return (day); }

std::ostream	&operator<<(std::ostream &ost, const Date &t)
{
	static char c = '-';
	ost.fill('0');
	ost.setf(std::ios::right);
	ost.width(4);
	ost << t.getYear() << c;
	ost.width(2);
	ost << t.getMonth() << c;
	ost.width(2);
	ost << t.getDay();
	return (ost); 
}
