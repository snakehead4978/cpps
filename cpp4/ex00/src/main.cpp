/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:29:44 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 18:09:55 by jeremie          ###   ########.fr       */
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


int main()
{
	std::cout << "Animal test\n\n";
	testAnimal();
	std::cout << "\n\nWrong Animal test\n\n";
	testWrongAnimal();
	return (0);
}
