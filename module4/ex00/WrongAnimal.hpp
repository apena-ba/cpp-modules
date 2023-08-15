/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:57:32 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 14:54:39 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMMAL_HPP
#define WRONGANIMMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &to_copy);
        ~WrongAnimal();
        WrongAnimal &operator=(WrongAnimal const &to_copy);
        std::string getType(void) const;
        void makeSound(void) const;
};

#endif