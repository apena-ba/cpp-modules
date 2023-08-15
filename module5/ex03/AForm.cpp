/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:52:43 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/18 19:11:19 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// EXCEPTIONS

class AForm::FormNotSignedException : public std::exception{
    virtual const char *what() const throw(){
        return "Form is not signed";
    }
};

class AForm::GradeTooHighException : public std::exception{
    virtual const char *what() const throw(){
        return "Grade too hight";
    }
};

class AForm::GradeTooLowException : public std::exception{
    virtual const char *what() const throw(){
        return "Grade too low";
    }
};

// CONSTRUCTORS AND DESTRUCTORS

AForm::AForm(AForm &to_copy) :
    _name(to_copy.getName()), _gradeToSign(to_copy.getGradeToSign()), _gradeToExecute(to_copy.getGradeToExecute()), _isSigned(to_copy.getSign()){}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) :_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false){
    if(gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    else if(gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
}

AForm::~AForm(){}

// METHODS

bool AForm::getSign(void) const {return(this->_isSigned);}
std::string AForm::getName(void) const {return(this->_name);}
int AForm::getGradeToExecute(void) const {return(this->_gradeToExecute);}
int AForm::getGradeToSign(void) const {return(this->_gradeToSign);}

void AForm::beSigned(Bureaucrat &bur){
    if(bur.getGrade() > this->_gradeToSign)
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << bur << " signs " << *this << std::endl;
        this->_isSigned = true;
    }
}

void AForm::checkExecute(Bureaucrat const & executor) const{
    if(this->getSign() == false)
        throw AForm::FormNotSignedException();
    else if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
}

// OVERLOADING

AForm &AForm::operator=(AForm &to_equal){
    this->_isSigned = to_equal.getSign();
    return(*this);
}

std::ostream &operator<<(std::ostream &ost, AForm &to_op){
    return(ost << to_op.getName() << ", to exec: " <<
        to_op.getGradeToExecute() << ", to sign: " <<
        to_op.getGradeToSign() << ", sign: " <<
        to_op.getSign() << std::endl);
}
