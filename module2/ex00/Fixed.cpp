/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:04:30 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/13 21:24:59 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &to_copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = to_copy;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &to_equal){
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPoint = to_equal.getRawBits();
    return (*this);
}

int Fixed::getRawBits (void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_fixedPoint);
}

void Fixed::setRawBits (int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPoint = raw;
}
