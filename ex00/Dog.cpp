/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 03:38:46 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog") {};


Dog::Dog(const Dog &other) : Animal() {
    type=other.type;
}

Dog& Dog::operator=(const Dog &other) {
    if (this != &other){
        type = other.type;
    }
    return *this;
};

Dog::~Dog(){}; 

std::string Dog::getType(void) const {
    return type;
}

void Dog::makeSound(void) const {
    std::cout << "Woof Woof!" << std::endl;
};
