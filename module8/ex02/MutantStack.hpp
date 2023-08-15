/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:00:58 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/07 23:30:36 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() : std::stack<T>(){}
        MutantStack(MutantStack const &to_copy) : std::stack<T>(to_copy){}
        ~MutantStack(){}
        
        MutantStack &operator=(MutantStack &to_equal){
            std::stack<T>::operator=(to_equal);
            return(*this);
        }
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin(){return std::stack<T>::c.begin();}
        iterator end(){return std::stack<T>::c.end();}
        
        const_iterator begin() const{return std::stack<T>::c.begin();}
        const_iterator end() const{return std::stack<T>::c.end();}
};

#endif