/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:26:07 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/17 12:33:42 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
# define BITCOIN_HPP

# include <map>
# include <string>
# include "Date.hpp"

class BitcoinExchange
{
	private:
		std::map<Date, double>	_data;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &);
		BitcoinExchange	&operator=(const BitcoinExchange &);
		void	setEntry(std::string, double);
		double	getEntry(const Date &) const;
		
};










#endif