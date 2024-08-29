/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:32:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/29 16:52:14 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<string>
#include<iostream>

class WrongAnimal {
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal& operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();
        
        std::string getType() const;
        void makeSound() const;
               
    protected:
        std::string _type;
};

#endif