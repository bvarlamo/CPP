/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:05:26 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 13:58:02 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain copy assignment operator called" << std::endl;

	return (*this);
}

const std::string* Brain::getIdeas( void ) const{
	return this->_ideas;
}

void Brain::setIdeas( const std::string* _ideas ){
	std::copy(_ideas, _ideas + 100, this->_ideas);
}