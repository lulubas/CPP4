/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:32:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/03 06:20:02 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include<string>
#include<iostream>

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog();
        
        std::string getType() const;
        void makeSound() const;
        std::string getBrainIdea(int i) const;
    
    private:
        Brain *_mybrain;
};

#endif