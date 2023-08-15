/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:46:42 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 14:53:51 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &to_copy){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = to_copy;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &to_copy){
    std::cout << "Animal assignment operator called" << std::endl;
    this->_type = to_copy._type;
    return(*this);
}

std::string Animal::getType(void) const{
    return(this->_type);
}

void Animal::makeSound(void) const{
    std::cout << "* Animal sound *" << std::endl;
}
