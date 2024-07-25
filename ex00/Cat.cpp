/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 03:39:17 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat") {};


Cat::Cat(const Cat &other) : Animal() {
    type=other.type;
}

Cat& Cat::operator=(const Cat &other) {
    if (this != &other){
        type = other.type;
    }
    return *this;
};

Cat::~Cat(){}; 

std::string Cat::getType(void) const {
    return type;
}

void Cat::makeSound(void) const{
    std::cout << "Meow Meow!" << std::endl;
};
