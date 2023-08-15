/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:48:33 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/18 22:25:18 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// CONSTRUCTORS AND DESTRUCTORS

RobotomyRequestForm::RobotomyRequestForm() : 
    AForm("RobotomyRequestForm", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
    AForm("RobotomyRequestForm", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &to_copy) :
    AForm(to_copy.getName(), to_copy.getGradeToSign(), to_copy.getGradeToExecute()){}

RobotomyRequestForm::~RobotomyRequestForm(){}

// METHODS

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    AForm::checkExecute(executor);
    this->robotomizer();
}

void RobotomyRequestForm::robotomizer(void) const{
    std::cout << "* DRILLING NOISES *" << std::endl;
    std::srand(std::time(0));
    int random = rand() % 2;
    if(random % 2 == 0)
        std::cout << this->_target << " has been robotomized" << std::endl;
    else
        std::cout << "robotomy failed" << std::endl;
}

// OVERLOADING

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &to_equal){
    AForm::operator=(to_equal);
    return(*this);
}

std::ostream &operator<<(std::ostream &ost, RobotomyRequestForm &to_op){
    return(ost << to_op.getName() << ", to exec: " <<
        to_op.getGradeToExecute() << ", to sign: " <<
        to_op.getGradeToSign() << ", sign: " <<
        to_op.getSign() << std::endl);
}
