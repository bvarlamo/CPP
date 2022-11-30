/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:30:45 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/14 18:33:30 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class	Base
{
	public:
		virtual	~Base(){};
};

class	A : public Base
{

};

class	B : public Base
{

};

class	C : public Base
{

};

#endif