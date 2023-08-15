/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:33:52 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/18 21:43:44 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

class AForm{
    private:
        std::string const _name;
        int const _gradeToSign;
        int const _gradeToExecute;
        bool _isSigned;
    public:
        AForm();
        AForm(AForm &to_copy);
        AForm(const std::string &name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        
        AForm &operator=(AForm &to_equal);
        
        void beSigned(Bureaucrat &bur);
        
        bool getSign(void) const;
        std::string getName(void) const;
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;
        
        virtual void execute(Bureaucrat const & executor) const = 0;
        void checkExecute(Bureaucrat const & executor) const;
        
        class GradeTooHighException;
        class GradeTooLowException;
        class FormNotSignedException;
};

std::ostream &operator<<(std::ostream &ost, AForm &to_op);

#endif