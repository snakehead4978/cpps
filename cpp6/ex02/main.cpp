/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:09:55 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/09 18:39:44 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <iostream>
#include <ctime>

Base	*generate()
{
	int	type;

	type = rand() % 3;
	switch (type)
	{
		case 0:
		{
			std::cout << "\nCreating object class A\n";
			Base	*node = new A();
			return (node);
		}
		case 1:	
		{
			std::cout << "\nCreating object class B\n";
			Base	*node = new B();
			return (node);
		}
		default:
		{
			std::cout << "\nCreating object class C\n";
			Base	*node = new C();
			return (node);
		}
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << p << " is an object of class A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << p << " is an object of class B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << p << " is an object of class C\n";
	else
		std::cout << p << " is an object of an unidentified class\n";
}

void	identify(Base &p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << &p << " is an object of class A\n";
	}
	catch (const std::exception &e)
	{
		(void)e;
		try
		{
			dynamic_cast<B &>(p);
			std::cout << &p << " is an object of class B\n";
		}
		catch (const std::exception &e)
		{
			(void)e;
			try
			{
				dynamic_cast<C &>(p);
				std::cout << &p << " is an object of class C\n";
			}
			catch (const std::exception &e)
			{
				(void)e;
				std::cout << &p << " is an object of an unidentified class\n";
			}
		}
	}
}

int	main()
{
	identify(0);
	srand(time(0));
	int i = 1;
	std::cout << "\nObject number " << i++ << std::endl;
	Base	*obj = generate();
	identify(obj);
	delete obj;
	std::cout << "\nObject number " << i++ << std::endl;
	obj = generate();
	identify(obj);
	delete obj;
	std::cout << "\nObject number " << i++ << std::endl;
	obj = generate();
	identify(obj);
	delete obj;
	std::cout << "\nObject number " << i++ << std::endl;
	obj = generate();
	identify(*obj);
	delete obj;
	std::cout << "\nObject number " << i++ << std::endl;
	obj = generate();
	identify(*obj);
	delete obj;
	std::cout << "\nObject number " << i++ << std::endl;
	obj = generate();
	identify(*obj);
	delete obj;
	return (0);
};

