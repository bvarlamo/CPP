/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:12:26 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 13:01:36 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{

	{

		std::cout <<  COLOR_BLUE << "*** Basic Tests and copies ***" << COLOR_DEFAULT << std::endl;
		Animal animal1;
		Animal animal2;
		animal2 = animal1;
		animal1.makeSound();

		Animal animal3(animal1);

		Dog dog;
		dog.makeSound();
		std::cout << dog.getType() << std::endl;

		Cat cat;
		cat.makeSound();
		std::cout << cat.getType() << std::endl;
	}
	{
		std::cout <<  COLOR_BLUE << "*** Basic Tests II ***" << COLOR_DEFAULT << std::endl;
		std::cout <<  COLOR_BLUE << "*** \t Constructor ***" << COLOR_DEFAULT << std::endl;
		const Animal* meta = new Animal();
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();
		std::cout << std::endl;

		std::cout <<  COLOR_BLUE << "*** \t getType() ***" << COLOR_DEFAULT << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << std::endl;

		std::cout <<  COLOR_BLUE << "*** \t makeSound() ***" << COLOR_DEFAULT << std::endl;
		meta->makeSound();
		cat->makeSound();
		dog->makeSound();
		std::cout << std::endl;

		std::cout <<  COLOR_BLUE << "*** \t Destructor ***" << COLOR_DEFAULT << std::endl;
		delete meta;
		delete cat;
		delete dog;
		std::cout << std::endl;

		std::cout <<  COLOR_BLUE << "*** Wrong Test cases ***" << COLOR_DEFAULT << std::endl;
		std::cout <<  COLOR_BLUE << "*** \t Constructor ***" << COLOR_DEFAULT << std::endl;

		const WrongAnimal* wrong_animal = new WrongAnimal();
		const WrongAnimal* wrong_cat = new WrongCat();
		std::cout << std::endl;

		std::cout <<  COLOR_BLUE << "*** \t getType() ***" << COLOR_DEFAULT << std::endl;
		std::cout << wrong_cat->getType() << " " << std::endl;
		std::cout << std::endl;

		std::cout <<  COLOR_BLUE << "*** \t makeSound() ***" << COLOR_DEFAULT << std::endl;

		wrong_animal->makeSound();
		wrong_cat->makeSound();
		std::cout << std::endl;

		std::cout <<  COLOR_BLUE << "*** \t Destructor ***" << COLOR_DEFAULT << std::endl;

		delete wrong_animal;
		delete wrong_cat;
		std::cout << std::endl;
	}

	return (0);
}