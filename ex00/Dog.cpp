/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 17:26:31 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog") {
    std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(const Dog &other) : Animal() {
    std::cout << "Dog copy constructor called" << std::endl;
    type=other.type;
}

Dog& Dog::operator=(const Dog &other) {
    std::cout << "Dog copy assignement operator called" << std::endl;
    if (this != &other){
        type = other.type;
    }
    return *this;
};

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}; 

std::string Dog::getType(void) const {
    return type;
}

void Dog::makeSound(void) const {
    std::cout << "Woof Woof!" << std::endl;
};
