/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:34:34 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 18:43:44 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap empty constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &to_copy){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = to_copy;
}

ScavTrap::ScavTrap(std::string name){
    std::cout << "ScavTrap name constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &to_equal){
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->_name = to_equal._name;
    this->_energyPoints = to_equal._energyPoints;
    this->_attackDamage = to_equal._attackDamage;
    this->_hitPoints = to_equal._hitPoints;
    return(*this);
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

