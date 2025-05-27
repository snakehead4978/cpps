/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:29:44 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 19:23:30 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

void	testAnimal()
{
	const Animal* meta = new Animal();
	std::cout << "\n\n";
	const Animal* j = new Dog();
	std::cout << "\n\n";
	const Animal* i = new Cat();
	std::cout << "\n\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	std::cout << "\n\n";
	delete i;
	std::cout << "\n\n";
	delete meta;
}

void	testWrongAnimal()
{
	const WrongAnimal* meta = new WrongAnimal();
	std::cout << "\n\n";
	const WrongAnimal* i = new WrongCat();
	std::cout << "\n\n";
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	delete i;
	std::cout << "\n\n";
	delete meta;
}

void	testIdeas()
{
	Cat *a = new Cat;
	std::cout << "\n\n";
	a->setIdea(0, "lulw");
	Cat *b = new Cat(*a);
	std::cout << "\n\n";
	std::cout << a->getIdea(1) << std::endl;
	std::cout << "\n\n";
	std::cout << b->getIdea(0) << std::endl;
	std::cout << "\n\n";
	delete a;
	std::cout << "\n\n";
	delete b;
}

int main()
{
	// std::cout << "Animal test\n\n";
	// testAnimal();
	// std::cout << "\n\nWrong Animal test\n\n";
	// testWrongAnimal();
	// std::cout << "\n\nIdea test\n\n";
	// testIdeas();
	Animal	*arr[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
		std::cout << std::endl;
	}
	std::cout << "\n\nDelete time\n\n";
	for (int i = 0; i < 10; i++)
	{
		delete arr[i];
		std::cout << std::endl;
	}
	return (0);
}
