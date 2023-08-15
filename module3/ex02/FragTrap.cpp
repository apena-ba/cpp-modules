/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:07:50 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/04 23:34:57 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name){
    std::cout << "FragTrap name constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &to_copy){
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = to_copy;
}

FragTrap &FragTrap::operator=(FragTrap &to_equal){
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->_name = to_equal._name;
    this->_energyPoints = to_equal._energyPoints;
    this->_attackDamage = to_equal._attackDamage;
    this->_hitPoints = to_equal._hitPoints;
    return(*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->_name << " high fives!" << std::endl;
}
