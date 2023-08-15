/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:04:52 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/18 22:25:21 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// CONSTRUCTORS AND DESTRUCTORS

PresidentialPardonForm::PresidentialPardonForm() : 
    AForm("PresidentialPardonForm", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
    AForm("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &to_copy) :
    AForm(to_copy.getName(), to_copy.getGradeToSign(), to_copy.getGradeToExecute()){}

PresidentialPardonForm::~PresidentialPardonForm(){}

// METHODS

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    AForm::checkExecute(executor);
    this->forgiver();
}

void PresidentialPardonForm::forgiver(void) const{
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

// OVERLOADING

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &to_equal){
    AForm::operator=(to_equal);
    return(*this);
}

std::ostream &operator<<(std::ostream &ost, PresidentialPardonForm &to_op){
    return(ost << to_op.getName() << ", to exec: " <<
        to_op.getGradeToExecute() << ", to sign: " <<
        to_op.getGradeToSign() << ", sign: " <<
        to_op.getSign() << std::endl);
}

