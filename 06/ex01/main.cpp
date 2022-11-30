/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:54:19 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/14 18:29:59 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t	serialize(Data* ptr)
{

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{

	return (reinterpret_cast<Data*>(raw));
}

int		main(int argc, char** argv)
{
	Data *data = new Data;
	data->c = 'z';
	data->i = 15;
	data->f = 0.15;
	data->str = "Hello";

	std::cout << "data address before: " << data << std::endl;
	std::cout << "Before: c:" << data->c << " i:" << data->i << " f:" << data->f << " s:" + data->str << std::endl;

	std::cout << std::endl;

	uintptr_t raw = serialize(data);
	Data* nw = deserialize(raw);
	
	std::cout << std::endl;
	
	std::cout << "data address after: " << nw << std::endl;
	std::cout << "After: c:" << nw->c << " i:" << nw->i << " f:" << nw->f << " s:" + nw->str << std::endl;

	


	
	return (0);
}