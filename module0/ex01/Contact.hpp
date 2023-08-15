/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:00:06 by apena-ba          #+#    #+#             */
/*   Updated: 2022/12/18 22:18:59 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact{
    private:
        int         _index;
        std::string _name;
        std::string _lastname;
        std::string _nickname;
        std::string _number;
        std::string _secret;
    public: // Métodos
        Contact(std::string name, std::string lastname, std::string nickname, std::string number, std::string secret); // Constructor
        Contact(void); // Constructor
        ~Contact(void); // Constructor
        void GetIndex(int index);
        void DisplayInformation(void);
        void DisplaySelected(void);
};

#endif