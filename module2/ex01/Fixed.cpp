/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:04:30 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 12:33:22 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS AND DESTRUCTORS

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &to_copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = to_copy;
}

Fixed::Fixed(const float to_set){
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = roundf(to_set * (1 << this->_nBits));
}

Fixed::Fixed(const int to_set){
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = to_set << _nBits;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

// OVERLOADING

Fixed &Fixed::operator=(const Fixed &to_equal){
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPoint = to_equal.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &ost, const Fixed &to_op){
    return ost << to_op.toFloat();
}

// METHODS

float Fixed::toFloat(void) const{
    return (float(this->_fixedPoint) / (1 << this->_nBits));
}

int Fixed::toInt(void) const{
    return(this->_fixedPoint >> this->_nBits);
}

int Fixed::getRawBits (void) const{
    return(this->_fixedPoint);
}

void Fixed::setRawBits (int const raw){
    this->_fixedPoint = raw;
}
