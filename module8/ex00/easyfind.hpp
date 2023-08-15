/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:55:15 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/05 15:21:25 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template<typename T>
typename T::const_iterator easyfind(T &cont, int to_find){
    typename T::const_iterator it = std::find(cont.begin(), cont.end(), to_find);
    if(it == cont.end())
        throw std::exception();
    return it;
}

#endif