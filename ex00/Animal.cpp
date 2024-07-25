/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 03:33:37 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {};


Animal::Animal(const Animal &other) {
    type=other.type;
}

Animal& Animal::operator=(const Animal &other) {
    if (this != &other){
        type = other.type;
    }
    return *this;
};

std::string Animal::getType(void) const {
    return type;
}

void Animal::makeSound(void) const {
    std::cout << "Some random animal noise" << std::endl;
};

Animal::~Animal(){};