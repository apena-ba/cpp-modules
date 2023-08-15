/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:55:15 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/05 14:18:57 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array{
    private:
        T   *_array;
        unsigned int _size;
    public:
        
        // CONSTRUCTORS AND DESTRUCTORS
        Array<T>(void){
            this->_array = NULL;
            this->_size = 0;
        }
        Array<T>(unsigned int n){
            std::cout << "one" << std::endl;
            this->_array = new T[n];
            this->_size = n;
        }
        
        ~Array<T>(){
            delete [] this->_array;
        }
        
        Array<T>(Array<T> const &to_copy){*this = to_copy;}
        // OVERLOADING
        
        Array<T> & operator=(Array<T> const &to_equal){
            delete [] this->_array;
            std::cout << "bug" << std::endl;
            this->_array = new T[to_equal._size];
            for(unsigned int i = 0; i < to_equal._size; i++)
                this->_array[i] = to_equal._array[i];
            this->_size = to_equal._size;
            std::cout << "bug" << std::endl;
            return(*this);
        }
        T &operator[](int index){
            if(index > static_cast<int>(this->_size)
                || index > static_cast<int>(this->_size))
                throw std::exception();
            return(this->_array[index]);
        }
        
        // METHODS
        unsigned int size(void) const{
            return this->_size;
        }
};

#endif