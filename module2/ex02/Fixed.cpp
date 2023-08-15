/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:04:30 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 12:27:24 by apena-ba         ###   ########.fr       */
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
    this->_fixedPoint = to_equal.getRawBits();
    return (*this);
}

// Comparations

bool Fixed::operator==(const Fixed &to_check) const{
    return (this->toFloat() == to_check.toFloat());
}

bool Fixed::operator!=(const Fixed &to_check) const{
    return (this->toFloat() != to_check.toFloat());
}

bool Fixed::operator>(const Fixed &to_check) const{
    return (this->toFloat() > to_check.toFloat());
}

bool Fixed::operator>=(const Fixed &to_check) const{
    return (this->toFloat() >= to_check.toFloat());
}

bool Fixed::operator<(const Fixed &to_check) const{
    return (this->toFloat() < to_check.toFloat());
}

bool Fixed::operator<=(const Fixed &to_check) const{
    return (this->toFloat() <= to_check.toFloat());
}

// Operands

Fixed Fixed::operator+(const Fixed &to_sum) const{
    return (Fixed(this->toFloat() + to_sum.toFloat()));
}

Fixed Fixed::operator++(int){
    Fixed ret = *this;
    operator++();
    return (ret);
}

Fixed Fixed::operator++(void){
    this->_fixedPoint += 1;
    return (*this);
}

Fixed Fixed::operator-(const Fixed &to_res) const{
    return (Fixed(this->toFloat() - to_res.toFloat()));
}

Fixed Fixed::operator--(int){
    Fixed ret = *this;
    operator--();
    return (ret);
}

Fixed Fixed::operator--(void){
    this->_fixedPoint -= 1;
    return (*this);
}

Fixed Fixed::operator*(const Fixed &to_mult) const{
    return (Fixed(this->toFloat() * to_mult.toFloat()));
}

Fixed Fixed::operator/(const Fixed &to_div) const{
    return (Fixed(this->toFloat() / to_div.toFloat()));
}

// Output

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

Fixed &Fixed::max(Fixed &a, Fixed &b) const{
    if(a > b)
        return a;
    return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) const{
    if(b > a)
        return b;
    return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    if(a > b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    if(b > a)
        return b;
    return a;
}
