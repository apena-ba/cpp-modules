/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:44:28 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/06 20:23:32 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMMAL_HPP
#define ANIMMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(Animal const &to_copy);
        virtual ~Animal() = 0;
        Animal &operator=(Animal const &to_copy);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
};

#endif