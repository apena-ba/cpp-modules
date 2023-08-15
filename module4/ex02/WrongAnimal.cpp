/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:58:11 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 14:54:31 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal empty constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &to_copy){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = to_copy;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &to_copy){
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->_type = to_copy._type;
    return(*this);
}

void WrongAnimal::makeSound(void) const{
    std::cout << "* WrongAnimal noise *" << std::endl;
}

std::string WrongAnimal::getType(void) const{
    return(this->_type);
}
