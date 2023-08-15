/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:59:37 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/07 21:29:43 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(Cat const &to_copy){
    std::cout << "Cat type constructor called" << std::endl;
    this->_brain = new Brain();
    *this = to_copy;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat &Cat::operator=(Cat const &to_copy){
    std::cout << "Dog assignment operator called" << std::endl;
    this->_type = to_copy._type;
    *this->_brain = *to_copy._brain;
    return(*this);
}

void Cat::makeSound(void) const{
    std::cout << "* Meow *" << std::endl;
}
