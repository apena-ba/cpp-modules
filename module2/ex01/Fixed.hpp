/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:58:56 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/14 21:33:00 by apena-ba         ###   ########.fr       */
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
        Fixed &operator=(const Fixed &to_equal);
        
        int     getRawBits(void) const;
        void    setRawBits (int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &ost, const Fixed &to_op);

#endif