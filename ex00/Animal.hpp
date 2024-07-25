/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:32:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 03:35:28 by lbastien         ###   ########.fr       */
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
        ~Animal();
        
        virtual std::string getType() const;
        virtual void makeSound() const;
               
    protected:
        std::string type;
};

#endif