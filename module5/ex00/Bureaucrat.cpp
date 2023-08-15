/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:16:50 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/17 18:57:17 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// EXCEPTIONS

class Bureaucrat::GradeTooHighException : public std::exception
{
    virtual const char *what() const throw(){
        return "Grade too hight";
    }
};

class Bureaucrat::GradeTooLowException : public std::exception
{
    virtual const char *what() const throw(){
        return "Grade too low";
    }
};

// CONSTRUCTORS AND DESTRUCTORS

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150){
}

Bureaucrat::Bureaucrat(Bureaucrat &to_copy) : _name(to_copy.getName()) , _grade(to_copy.getGrade()){
}

Bureaucrat::Bureaucrat(const std::string &name_to_set, int grade_to_set) : _name(name_to_set){
    if(grade_to_set < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade_to_set > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade_to_set;
}

Bureaucrat::~Bureaucrat(){
}

//METHODS

int Bureaucrat::getGrade(void){
    return this->_grade;
}

std::string Bureaucrat::getName(void){
    return this->_name;
}

void Bureaucrat::incrementGrade(void){
    if(this->_grade > 1){
        this->_grade--;
    }
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void){
    if(this->_grade < 150){
        this->_grade++;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}

// OVERLOADING

Bureaucrat &Bureaucrat::operator=(Bureaucrat &to_equal) {
    this->_grade = to_equal.getGrade();
    return (*this);
}

std::ostream &operator<<(std::ostream &ost, Bureaucrat &to_op){
    return ost << to_op.getName() << ", bureaucrat grade " << to_op.getGrade();
}
