/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:02:36 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/08 21:04:32 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(Dog const &to_copy){
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain();
    *this = to_copy;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

Dog &Dog::operator=(Dog const &to_copy){
    std::cout << "Dog assignment operator called" << std::endl;
    this->_type = to_copy._type;
    *this->_brain = *to_copy._brain;
    return(*this);
}

void Dog::makeSound(void) const{
    std::cout << "* Guau *" << std::endl;
}
