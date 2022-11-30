/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:06:23 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/20 11:47:38 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
	std::cout << "--------Generated values ---------" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
		std::cout << value << " ";
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << std::endl << std::endl;
    //SCOPE
	Array<int> tmp = numbers;
	std::cout << "--------tmp values ---------" << std::endl;
	for (int i = 0; i < tmp.size(); i++)
		std::cout << tmp[i] << " ";
	std::cout << std::endl << std::endl;
	Array<int> test(tmp);
	std::cout << "--------test values ---------" << std::endl;
	for (int i = 0; i < test.size(); i++)
		std::cout << test[i] << " ";
	std::cout << std::endl << std::endl;
		
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	std::cout << "--------numbers values ---------" << std::endl;
	for (int i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl << std::endl;
	std::cout << "--------tmp values ---------" << std::endl;
	for (int i = 0; i < tmp.size(); i++)
		std::cout << tmp[i] << " ";
	std::cout << std::endl << std::endl;
	std::cout << "--------test values ---------" << std::endl;
	for (int i = 0; i < test.size(); i++)
		std::cout << test[i] << " ";
	std::cout << std::endl << std::endl;
	
    delete [] mirror;//
    return 0;
}