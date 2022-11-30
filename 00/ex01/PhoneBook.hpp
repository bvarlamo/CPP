/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:40:20 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/05 11:52:23 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
		void	add_contact( void );
		void	print( void );
	private:
		Contact contacts[8];
		static int	entries;
		static int	count;
};

#endif
