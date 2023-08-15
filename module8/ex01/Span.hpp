/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:00:58 by apena-ba          #+#    #+#             */
/*   Updated: 2023/04/06 21:13:29 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>
#include <iostream>

class Span{
    private:
        unsigned int _maxSize;
        std::list<int> _numbers;
        Span();
    public:
        Span(Span const &to_copy);
        Span(unsigned int max_size);
        ~Span();

        void addNumber(int to_add);
        void addNumbers(int begin, int end);
        int shortestSpan(void);
        int longestSpan(void);

        Span &operator=(Span const &to_equal);

        class SpanIsFullException : public std::exception{
            public:
                virtual const char * what() const throw(){
                    return "Span is full";
                }
        };
        
        class SpanNotFoundException : public std::exception{
            public:
                virtual const char * what() const throw(){
                    return "No span found";
                }
        };
        
        class BadInitException : public std::exception{
            public:
                virtual const char * what() const throw(){
                    return "Values were not correct";
                }
        };
};

#endif