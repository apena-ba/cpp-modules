/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:03:16 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 14:54:44 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat empty constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &to_copy){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = to_copy;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &to_copy){
    std::cout << "WrongCat assignment operator called" << std::endl;
    this->_type = to_copy._type;
    return(*this);
}

void WrongCat::makeSound(void) const{
    WrongAnimal::makeSound();
}
