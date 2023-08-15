/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:40:37 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/30 19:51:54 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// CONSTRUCTORS AND DESTRUCTORS

Data::Data() : _name("Default") {}

Data::Data(Data &to_copy){
    *this = to_copy;
}

Data::~Data(){}

// OVERLOADING

Data   &Data::operator=(Data &to_copy){
    this->_name = to_copy._name;
    return(*this);
}

// METHODS

std::string Data::getName(void) const{
    return(this->_name);
}

