/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:32:04 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/30 17:37:37 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

# include <iostream>
# include <limits.h>
# include <math.h>
# include <sstream>
# include <cmath>
# include <string>
# include <iomanip>


class Converter{
    private:
        std::string _str;
        char _char;
        int _int;
        float _float;
        double _double;
    public:
        Converter();
        Converter(const std::string &agument);
        Converter(Converter &to_copy);
        ~Converter();
        
        Converter   &operator=(Converter &to_copy);
        
        void convert(void);
        void printConv(void);

        class BadInputException;
};

#endif