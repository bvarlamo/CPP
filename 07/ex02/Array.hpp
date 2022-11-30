/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:54:15 by bvarlamo          #+#    #+#             */
/*   Updated: 2022/05/20 11:38:38 by bvarlamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array{
	
	private:
		T		*_array;
		size_t	_size;
	public:
		Array();
		Array(unsigned int size);
		Array(const Array<T> & obj);
		virtual ~Array();
		Array<T>& operator=(const Array<T> &obj);
		T& operator[](size_t i);

		size_t	size() const;
		T*		getArray() const;

		class OutOfBoundsException : public std::exception{
			public:
				const char* what() const throw(){
					return("Incorect index");
				}
		};

};

template <typename T> 
T& Array<T>::operator[](size_t i){
	
	if (i >= this->_size || i < 0)
		throw Array::OutOfBoundsException();
	return (this->_array[i]);
}

template <typename T> 
Array<T>& Array<T>::operator=(const Array<T> &obj){
	
	this->_size = obj.size();
	this->_array = obj.getArray();

	return (*this);
}

template <typename T> 
Array<T>::~Array(){
	
	delete [] this->_array;
}

template <typename T> 
T*		Array<T>::getArray() const{
	
	T	*arr = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		arr[i] = this->_array[i];
	
	return (arr);
}

template <typename T> 
size_t	Array<T>::size() const{
	
	return (this->_size);
}

template <typename T> 
Array<T>::Array(const Array<T> & obj){
	
	this->_size = obj.size();
	this->_array = obj.getArray();
}

template <typename T> 
Array<T>::Array(){
	
	this->_size = 0;
	this->_Array == new T[_size];
}

template <typename T> 
Array<T>::Array(unsigned int size){
	
	this->_size = size;
	this->_array = new T[size];

}

#endif