/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:29:44 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/03 11:04:58 by jla-chon         ###   ########.fr       */
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
	std::cout << "\nNo type Animal called\n";
	const Animal* meta = new Animal();
	std::cout << "\nDog called\n";
	const Animal* j = new Dog();
	std::cout << "\nCat called\n";
	const Animal* i = new Cat();
	std::cout << "\n\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\nDog deleted\n";
	delete j;
	std::cout << "\nCat deleted\n";
	delete i;
	std::cout << "\nNo type animal deleted\n";
	delete meta;
}

void	testWrongAnimal()
{
	std::cout << "\nWrong Animal called\n";
	const WrongAnimal* meta = new WrongAnimal();
	std::cout << "\nWrong Cat called\n";
	const WrongAnimal* i = new WrongCat();
	std::cout << "\n\n";
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();
	std::cout << "\nWrong cat make sound called as wrongcat\n";
	((WrongCat *)i)->makeSound();
	std::cout << "\nWrong Cat deleted\n";
	delete i;
	std::cout << "\nWrong Animal deleted\n";
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
