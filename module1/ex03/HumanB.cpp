/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:24:45 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/10 18:08:32 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name_toget){
    this->_name = name_toget;
    this->_weapon = NULL;
}

HumanB::~HumanB(void){
}

void HumanB::attack(void){
    if(this->_weapon != NULL)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " doesn't have a weapon!" << std::endl;
}

void HumanB::setWeapon(Weapon &to_set){
    this->_weapon = &to_set;
}
