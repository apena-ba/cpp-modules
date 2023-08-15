/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:33:52 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/17 19:37:08 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"

class Form{
    private:
        std::string const _name;
        int const _gradeToSign;
        int const _gradeToExecute;
        bool _isSigned;
    public:
        Form();
        Form(Form &to_copy);
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        ~Form();
        
        Form &operator=(Form &to_equal);
        
        void beSigned(Bureaucrat &bur);
        
        bool getSign(void);
        std::string getName(void);
        int getGradeToSign(void);
        int getGradeToExecute(void);

        class GradeTooHighException;
        class GradeTooLowException;
};

std::ostream &operator<<(std::ostream &ost, Form &to_op);

#endif