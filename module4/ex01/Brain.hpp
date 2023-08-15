/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:59:06 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 20:39:33 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(Brain &to_copy);
        
        Brain &operator=(Brain &to_equal);
        
        ~Brain();
};

#endif