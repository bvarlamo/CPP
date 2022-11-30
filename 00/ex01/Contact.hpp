/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:47:50 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/05 11:52:15 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <cstdio>
#include <iostream>

class	Contact
{
	public:
		void	addfirstname( void );
		void	addlastname( void );
		void	addnickname( void );
		void	addphone( void );
		void	addsecret( void );
		void	printing( void );
		void	search( void );
		
	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_Nickname;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
};

#endif