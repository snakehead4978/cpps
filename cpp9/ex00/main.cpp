/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:26:41 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/18 05:13:20 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include "Date.hpp"
#include <limits>
#include <sstream>

void	fillData(BitcoinExchange &database)
{
	std::ifstream	data("data.csv");
	if (data.fail())
		throw std::invalid_argument("could not open database file.");
	int i = 0;
	std::string line, date;
	double num;
	while (!data.eof())
	{
		std::getline(data, line);
		if ((!i && line ==  "date,exchange_rate") || line == "")
			continue ;
		std::stringstream gline(line);
		std::getline(gline, date, ',');
		if (!(gline >> num) || !data)
			throw std::invalid_argument("incorrect format.");
		database.setEntry(date, num);
		i++;
	}
	data.close();
}

void	printData(BitcoinExchange &database, std::ifstream &Readfile)
{
	int i = 0;
	std::string line, date;
	float num;
	double sum;
	while (!Readfile.eof())
	{
		std::getline(Readfile, line);
		if (!i && line ==  "date | value")
			continue ;
		try
		{
			std::stringstream gline(line);
			std::getline(gline, date, '|');
			if (!(gline >> num))
				throw std::invalid_argument("bad input => " + line);
			if (num < 0)
				throw std::out_of_range("not a positive number.");
			if (num > 1000)
				throw std::out_of_range("too large a number.");
			Date	dat(date);
			sum = database.getEntry(dat) * num;
			std::cout << dat << " => " << num << " = " << sum << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << '\n';
		}
		if (!Readfile)
			throw std::invalid_argument("problem reading file.");

		i++;
	}	
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file.\n";
		return (1);
	}
	(void) av;
	(void) ac;
	try
	{
		std::string		filename(av[1]);
		std::ifstream	ReadFile(filename.c_str());
		if (ReadFile.fail())
			throw std::invalid_argument("could not open file.");
		BitcoinExchange	database;
		fillData(database);
		printData(database, ReadFile);
		ReadFile.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		return (1);
	}
	return (0);
}

