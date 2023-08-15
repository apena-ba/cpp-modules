/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:41:54 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/06 21:13:43 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <algorithm>
#include <cstdlib>

// CONSTRUCTORS AND DESTRUCTORS

Span::Span(unsigned int max_size) : _maxSize(max_size){}

Span::Span(Span const &to_copy){*this = to_copy;}

Span::~Span(){}

// OVERLOADING

Span &Span::operator=(Span const &to_equal){
    this->_maxSize = to_equal._maxSize;
    this->_numbers = to_equal._numbers;
    return *this;
}

// METHODS

void Span::addNumber(int to_add){
    if(this->_numbers.size() < this->_maxSize)
        this->_numbers.push_back(to_add);
    else
        throw Span::SpanIsFullException();
}

void Span::addNumbers(int begin, int end){
    if(end < begin)
        throw Span::BadInitException();
    if(this->_numbers.size() + (end - begin) < this->_maxSize){
        for(int i = begin; i < end; i++)
            this->_numbers.push_back(i);
    }
    else
        throw Span::SpanIsFullException();
}

int Span::longestSpan(void){
    if(this->_numbers.size() <= 1)
        throw Span::SpanNotFoundException();
    std::list<int> sorted = this->_numbers;
    sorted.sort();
    return (sorted.back() - sorted.front());
}

int Span::shortestSpan(void){
    if(this->_numbers.size() <= 1)
        throw Span::SpanNotFoundException();
    std::list<int> sorted = this->_numbers;
    sorted.sort();
    long long int shortest = std::numeric_limits<int>::max();
    std::list<int>::iterator it = sorted.begin();
    std::list<int>::iterator it2 = sorted.begin();
    it2++;
    while(it2 != sorted.end()){
        if(*it2 - *it < shortest)
            shortest = *it2 - *it;
            it++;
            it2++;
    }
    return(shortest);
}
