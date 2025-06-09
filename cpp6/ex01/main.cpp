/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:48:38 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/09 18:05:41 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include <string>

int	main()
{
	int a = 97;
	char b = 'b';
	std::string	c = "letter c";

	Data *ptra = new Data;
	ptra->data = &a;
	Data ptrb;
	ptrb.data = &b;
	Data ptrc;
	ptrc.data = &c;
	std::cout << "\nPointer in ptra:" << ptra << " and data in it:" << *(static_cast<int *>(ptra->data)) << std::endl;
	std::cout << "\nPointer in ptrb:" << &ptrb << " and data in it:" << *(static_cast<char *>(ptrb.data)) << std::endl;
	std::cout << "\nPointer in ptrc:" << &ptrc << " and data in it:" << *(static_cast<std::string *>(ptrc.data)) << std::endl;
	std::cout << "\nSerialize then deserialize\n";
	Data	*uptra = Serializer::deserialize(Serializer::serialize(ptra));
	Data	*uptrb = Serializer::deserialize(Serializer::serialize(&ptrb));
	Data	*uptrc = Serializer::deserialize(Serializer::serialize(&ptrc));
	std::cout << "\nPointer in uptra:" << uptra << " and data in it:" << *(static_cast<int *>(uptra->data)) << std::endl;
	std::cout << "\nPointer in uptrb:" << uptrb << " and data in it:" << *(static_cast<char *>(uptrb->data)) << std::endl;
	std::cout << "\nPointer in uptrc:" << uptrc << " and data in it:" << *(static_cast<std::string *>(uptrc->data)) << std::endl;
	delete ptra;
}
