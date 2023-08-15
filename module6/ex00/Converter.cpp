/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:40:37 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/30 19:29:37 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

// UTILS FUNCTIONS

bool conditionInf(const std::string &str){
    if(str == "nan" || str == "nanf" || str == "-inff" ||
        str == "+inff" || str == "inff" || str == "inf" ||
        str == "-inf" || str == "+inf")
        return(1);
    return(0);
}

unsigned int countChar(std::string const &str, const char c){
    unsigned int count = 0;
    for (unsigned int i = 0; i < str.size(); i++) {
        if (str[i] == c)
            count++;
    }
    return count;
}

// EXCEPTIONS

class Converter::BadInputException : public std::exception
{
    virtual const char *what() const throw(){
        return "Bad input";
    }
};

// CONSTRUCTORS AND DESTRUCTORS

Converter::Converter(){}

Converter::Converter(const std::string &argument) : _str(argument){}

Converter::Converter(Converter &to_copy){
    *this = to_copy;
}

Converter::~Converter(){}

// OVERLOADING

Converter   &Converter::operator=(Converter &to_copy){
    this->_int = to_copy._int;
    this->_float = to_copy._float;
    this->_char = to_copy._char;
    this->_double = to_copy._double;

    return(*this);
}

// METHODS

void Converter::convert(){
    std::string alphabet = "<>!\"\'abcdeghijklmnipqrstuvwxyzABCDEFGHIJKLMNIPQRSTUVWXYZ";
    
    if(!conditionInf(this->_str) && this->_str.size() != 1){
        for(unsigned long i = 0; i < alphabet.size(); i++){
            if(this->_str.find(alphabet[i]) != std::string::npos)
                throw Converter::BadInputException();
        }
        if(countChar(this->_str, 'f') > 1 ||
            countChar(this->_str, '.') > 1 ||
            countChar(this->_str, '.') > 1 ||
            (this->_str.find('-') != std::string::npos && this->_str.find('-') != 0))
                throw Converter::BadInputException();
    }
    if(this->_str.size() == 1 && (this->_str[0] < 48 || this->_str[0] > 57))
        this->_double = static_cast<double>(this->_str[0]);
    else
        this->_double = static_cast<double>(atof(this->_str.c_str()));
    
    this->_char = static_cast<char>(_double);
    this->_int = static_cast<int>(_double);
    this->_float = static_cast<float>(_double);
}

void Converter::printConv(){
    // char
    std::cout << "Char : ";
    
    if(this->_double > std::numeric_limits<char>::max() || this->_double < std::numeric_limits<char>::min() || isnan(this->_double))
        std::cout << "impossible" << std::endl;
    else if (this->_double > 126 || this->_double < 32)
		std::cout << "Non displayable" << std::endl;
    else
        std::cout << _char << std::endl;
    
    // int
    std::cout << "Int : ";

    if(this->_double > std::numeric_limits<int>::max() || this->_double < std::numeric_limits<int>::min() || isnan(this->_double))
        std::cout << "impossible" << std::endl;
    else
        std::cout << _int << std::endl;
    
    // float
    std::cout << "Float : ";

    if((this->_double > std::numeric_limits<float>::max() || this->_double < -std::numeric_limits<float>::min()) && !conditionInf(this->_str))
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed <<  std::setprecision(1) << _float << "f" << std::endl;
    
    // double
    std::cout << "Double : " << std::fixed <<  std::setprecision(1) << _double << std::endl;
}
