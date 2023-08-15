/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:22:43 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/10 17:59:41 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type_toset){
    this->_type = type_toset;
}

Weapon::~Weapon(void){
}

const std::string &Weapon::getType(void){
    return(this->_type);
}

void Weapon::setType(std::string new_type){
    this->_type = new_type;
}
