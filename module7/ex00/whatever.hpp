/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:55:15 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/04 17:11:05 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T &min(T &a, T &b){
    if(a < b)
        return(a);
    return(b);
}

template<typename T>
T &max(T &a, T &b){
    if(a > b)
        return(a);
    return(b);
}

#endif