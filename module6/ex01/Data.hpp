/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:32:04 by apena-ba          #+#    #+#             */
/*   Updated: 2023/03/30 19:52:29 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

# include <iostream>
# include <string>
# include <sstream>

class Data{
    private:
        std::string _name;
    public:
        Data();
        Data(Data &to_copy);
        ~Data();
        
        Data   &operator=(Data &to_copy);

        std::string getName(void) const;
};

#endif