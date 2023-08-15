/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:13:18 by apena-ba          #+#    #+#             */
/*   Updated: 2022/12/19 18:21:22 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook{
    private: // Atributos
        Contact _contacts[8];
        int     _size;
    public: // Métodos
        PhoneBook(void); // Constructor
        ~PhoneBook(void); // Constructor
        void    RefreshIndex(void);
        void    DisplayContacts(void);
        void    AddContact(void);
        int     SearchContact(void);
        void    ExitPhonebook(void);
        void    GetMax(void);
};

#endif