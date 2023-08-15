/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:58:56 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/05 12:27:27 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <fstream>

class Fixed{
    private:
        int _fixedPoint;
        const static int _nBits = 8;
    public:
        Fixed();
        Fixed(const int to_set);
        Fixed(const float to_set);
        Fixed(const Fixed &to_copy);
        ~Fixed();
        
        int     getRawBits(void) const;
        void    setRawBits (int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        
        bool operator==(const Fixed &to_check) const;
        bool operator!=(const Fixed &to_check) const;
        bool operator>(const Fixed &to_check) const;
        bool operator>=(const Fixed &to_check) const;
        bool operator<(const Fixed &to_check) const;
        bool operator<=(const Fixed &to_check) const;
        
        Fixed &operator=(const Fixed &to_equal);
        Fixed operator*(const Fixed &to_mult) const;
        Fixed operator/(const Fixed &to_div) const;
        Fixed operator+(const Fixed &to_sum) const;
        Fixed operator-(const Fixed &to_res) const;
        
        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);
        
        Fixed &max(Fixed &a, Fixed &b) const;
        static const Fixed &max(const Fixed &a, const Fixed &b);
        Fixed &min(Fixed &a, Fixed &b) const;
        static const Fixed &min(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &ost, const Fixed &to_op);

#endif