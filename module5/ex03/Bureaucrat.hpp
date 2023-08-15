/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:59:33 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/18 22:01:03 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class AForm;
#include "AForm.hpp"

class Bureaucrat{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat &to_copy);
        Bureaucrat(const std::string &name_to_set, int grade_to_set);
        ~Bureaucrat();
        
        Bureaucrat &operator=(Bureaucrat &to_equal);
        
        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        void signForm(AForm &form);
        void executeForm(AForm const & form);
        
        class GradeTooHighException;
        class GradeTooLowException;      
};

std::ostream &operator<<(std::ostream &ost, Bureaucrat const &to_op);

#endif