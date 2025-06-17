/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:46:12 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/17 13:04:08 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
# define DATE_HPP

# include <iostream>
# include <string>
# include <exception>
# include <time.h>

class Date
{
	private:
		int	year;
		int	month;
		int	day;
		Date();
		static struct tm	cDate;
	public:
		Date(const std::string &);
		Date(const Date& t);
		Date&	operator=(const Date& t);
		int		getYear() const;
		int		getMonth() const;
		int		getDay() const;
		~Date();
};

bool	operator>(const Date &, const Date &);
bool	operator<(const Date &, const Date &);

std::ostream	&operator<<(std::ostream &, const Date &);


#endif
