/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:58:56 by apena-ba          #+#    #+#             */
/*   Updated: 2023/01/13 21:24:37 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed{
    private:
        int _fixedPoint;
        const static int _nBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &to_copy);
        ~Fixed();
        Fixed &operator=(const Fixed &to_equal);
        int getRawBits(void) const;
        void setRawBits (int const raw);
};

#endif