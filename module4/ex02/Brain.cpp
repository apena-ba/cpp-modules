/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:02:24 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 20:52:08 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = "Idea " + std::to_string(i);
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain &to_copy){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = to_copy;
}

Brain &Brain::operator=(Brain &to_equal){
    std::cout << "Brain assignation operator called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = to_equal._ideas[i];
    return(*this);
}
