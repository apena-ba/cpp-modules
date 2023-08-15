/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:52:43 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/17 19:42:26 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// EXCEPTIONS

class Form::GradeTooHighException : public std::exception{
    virtual const char *what() const throw(){
        return "Grade too hight";
    }
};

class Form::GradeTooLowException : public std::exception{
    virtual const char *what() const throw(){
        return "Grade too low";
    }
};

// CONSTRUCTORS AND DESTRUCTORS

Form::Form() : _name("Default"), _gradeToSign(145), _gradeToExecute(145), _isSigned(false){
}

Form::Form(Form &to_copy) :
    _name(to_copy.getName()), _gradeToSign(to_copy.getGradeToSign()), _gradeToExecute(to_copy.getGradeToExecute()), _isSigned(to_copy.getSign()){}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false){
    if(gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    else if(gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
}

Form &Form::operator=(Form &to_equal){
    this->_isSigned = to_equal.getSign();
    return(*this);
}

Form::~Form(){}

// METHODS

bool Form::getSign(void){return(this->_isSigned);}
std::string Form::getName(void){return(this->_name);}
int Form::getGradeToExecute(void){return(this->_gradeToExecute);}
int Form::getGradeToSign(void){return(this->_gradeToSign);}

void Form::beSigned(Bureaucrat &bur){
    if(bur.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    else
    {
        std::cout << bur << " signs " << *this << std::endl;
        this->_isSigned = true;
    }
}

// OVERLOADING

std::ostream &operator<<(std::ostream &ost, Form &to_op){
    return(ost << to_op.getName() << ", to exec: " <<
        to_op.getGradeToExecute() << ", to sign: " <<
        to_op.getGradeToSign() << ", signed: " <<
        to_op.getSign() << std::endl);
}
