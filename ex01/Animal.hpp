/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:32:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/29 16:44:34 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<string>
#include<iostream>

class Animal {
    public:
        Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);
        virtual ~Animal();
        
        virtual std::string getType() const;
        virtual void makeSound() const;
               
    protected:
        std::string _type;
};

#endif