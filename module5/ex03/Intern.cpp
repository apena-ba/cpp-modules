/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:04:30 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/07 19:43:43 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <cctype>

// CONSTRUCTORS AND DESTRUCTORS

Intern::Intern(){}
Intern::Intern(Intern const &to_copy){*this = to_copy;}
Intern::~Intern(){}

// OVERLOADING

Intern &Intern::operator=(Intern const &to_equal){
    (void)to_equal;
    return (*this);
}

// UTILS FUNCTIONS

AForm *presidentialBuild(std::string const &target){
    std::cout << "Intern creates PresidentialPardonForm" << std::endl;
    return (new PresidentialPardonForm(target));}

AForm *shrubberyBuild(std::string const &target){
    std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
    return (new ShrubberyCreationForm(target));}

AForm *robotomyBuild(std::string const &target){
    std::cout << "Intern creates RobotomyRequestForm" << std::endl;
    return (new RobotomyRequestForm(target));}

// METHODS

AForm *Intern::makeForm(std::string const &name, std::string const &target){
    std::string validNames[] = {
        "PRESIDENTIALPARDONFORM",
        "SHRUBBERYCREATIONFORM",
        "ROBOTOMYREQUESTFORM",
    };
    AForm *(*funcArray[])(std::string const &target) = {
        presidentialBuild,
        shrubberyBuild,
        robotomyBuild
    };
    std::string name_op(name);
    for (unsigned int i = 0; i < name_op.size(); i++)
        name_op[i] = toupper(name_op[i]);
    for (int i = 0; i < 3; i++){
        if(name_op == validNames[i]){
            return(funcArray[i](target));
        }
    }
    std::cerr << "No form found" << std::endl;
    return(NULL);
}
