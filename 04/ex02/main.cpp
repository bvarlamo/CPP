/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:12:26 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 14:18:22 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"

int	main()
{

	// AAnimal *animal = new AAnimal;
    // delete animal;

	Cat *cat = new Cat;
	cat->makeSound();
	std::cout << std::endl;
	Dog *dog = new Dog;
	dog->makeSound();

	std::cout << std::endl;
	
	delete cat;
	delete dog;
	
	return (0);
}