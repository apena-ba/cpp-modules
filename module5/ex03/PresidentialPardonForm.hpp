/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:03:54 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/07 19:16:40 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string const _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(PresidentialPardonForm &to_copy);
        ~PresidentialPardonForm();
        
        PresidentialPardonForm &operator=(PresidentialPardonForm &to_copy);
        
        void execute(Bureaucrat const & executor) const;
        void forgiver(void) const;
};

std::ostream &operator<<(std::ostream &ost, PresidentialPardonForm &to_op);


#endif