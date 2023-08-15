/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:48:50 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/18 22:25:07 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(RobotomyRequestForm &to_copy);
        ~RobotomyRequestForm();
        
        RobotomyRequestForm &operator=(RobotomyRequestForm &to_copy);
        
        void execute(Bureaucrat const & executor) const;
        void robotomizer(void) const;
};

std::ostream &operator<<(std::ostream &ost, RobotomyRequestForm &to_op);

#endif