/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:05:22 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/11 14:14:58 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "AAnimal.hpp"


class	Brain
{
	private:

			std::string _ideas[100];

	public:
		Brain();
		Brain(const Brain& obj);
		~Brain();
		Brain& operator=(const Brain& rhs);

		void setIdeas(const std::string* ideas );
		const std::string* getIdeas( void ) const;
};

#endif