/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwesley <lwesley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:04:52 by lwesley           #+#    #+#             */
/*   Updated: 2022/08/08 14:36:34 by lwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class someType>
class Array{
private:
	someType *_mas;
	int _size;

public:

	Array(int sizeMas = 0){
		if (sizeMas < 0)
			throw ErrorSize();
		_size = sizeMas;
		_mas = new someType[_size];
	}

	Array(Array const &copy){
		*this = copy;
	}

	Array &operator= (Array const &equals){
		if (&equals == this)
			return (*this);
		_size = equals.size();
		_mas = new someType[_size];
		for (int i = 0; i < _size; ++i)
			_mas[i] = equals._mas[i];
		return (*this);
	}

	someType &operator[](int index){
		if (index < 0 || index >= _size)
			throw ErrorIndex();
		return (_mas[index]);
	}

	int size() const{
		return (_size);
	}

	class ErrorIndex : public std::exception{
		virtual const char *what() const throw(){return "Error: index";}
	};

	class ErrorSize : public std::exception{
		virtual const char *what() const throw(){return "Error: size";}
	};

	~Array(){
		delete[] _mas;
	}
};

#endif