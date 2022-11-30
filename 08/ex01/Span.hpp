/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:08:04 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/23 09:58:48 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class	Span
{
	private:
		unsigned int		_N;
		std::vector<int> 	_arr;
		unsigned int		_count;

	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span & obj);

		Span& operator=(const Span & obj);

		void			addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			fillArray();

		class AddNumberException : public std::exception{
			public:
				const char* what() const throw(){
					return("Cant add number");
				}
		};

		class SpanException : public std::exception{
			public:
				const char* what() const throw(){
					return("No span can be found");
				}
		};
};
int				numGenerator();


#endif