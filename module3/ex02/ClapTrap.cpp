/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:58:10 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 19:26:30 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &to_copy){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = to_copy;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTrap name constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &to_equal){
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->_name = to_equal._name;
    this->_energyPoints = to_equal._energyPoints;
    this->_attackDamage = to_equal._attackDamage;
    this->_hitPoints = to_equal._hitPoints;
    return(*this);
}

void ClapTrap::attack(const std::string &target){
    if(this->_energyPoints > 0){
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else{
        std::cout << "ClapTrap " << this->_name << " tried to attack but doesn't have energy points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->_energyPoints > 0){
        std::cout << "ClapTrap " << this->_name << " got " << amount << " hit points back!" << std::endl;
        this->_energyPoints--;
    }
    else{
        std::cout << "ClapTrap " << this->_name << " tried to get repaired but doesn't have energy points!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
}
