/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:30:11 by snek              #+#    #+#             */
/*   Updated: 2025/05/31 16:10:54 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

static std::string	ft_replace(std::string str, std::string toFind, std::string toInsert)
{
	std::size_t	pointer;
	std::size_t	findSize;
	std::size_t	insertSize;

	findSize = toFind.size();
	insertSize = toInsert.size();
	pointer = 0;
	do
	{
		pointer = str.find(toFind, pointer);
		if (pointer == str.npos)
			break ;
		str.erase(pointer, findSize);
		str.insert(pointer, toInsert);
		pointer += insertSize;
	}
	while (pointer < str.size());
	return (str);
}

static int	checkFail(bool check)
{
	if (!check)
		return (0);
	std::cerr << "Problem opening file\n";
	return (1);
}

int	main(int ac, char**av)
{
	
	if (ac != 4)
	{
		std::cout << "Requires only 3 parameters: filename, str1 and str2" << std::endl;
		return (1);
	}
	std::string		filename(av[1]);
	std::string		toFind(av[2]);
	std::string		toInsert(av[3]);

	if (toFind == "")
	{
		std::cout << "Cannot search for nothing\n";
		return (1);
	}
	std::ifstream	ReadFile(filename.c_str());
	if (checkFail(ReadFile.fail()))
		return (1);

	std::stringstream	strStream;
	strStream << ReadFile.rdbuf();

	std::ofstream	WriteFile(filename.append(".replace").c_str());
	if (checkFail(WriteFile.fail()))
		return (1);

	std::string		toPaste(ft_replace(strStream.str(), toFind, toInsert));
	WriteFile.write(toPaste.c_str(), toPaste.size());
	ReadFile.close();
	WriteFile.close();
	return (0);
}
