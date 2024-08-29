/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 17:20:19 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
};


Animal::Animal(const Animal &other) {
    std::cout << "Animal copy constructor called" << std::endl;
    type=other.type;
}

Animal& Animal::operator=(const Animal &other) {
    std::cout << "Animal copy assignement operator called" << std::endl;
    if (this != &other){
        type = other.type;
    }
    return *this;
};

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
};

std::string Animal::getType(void) const {
    return type;
}

void Animal::makeSound(void) const {
    std::cout << "Some random animal noise" << std::endl;
};