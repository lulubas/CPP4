/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 17:26:34 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat") {
    std::cout << "Cat constructor called" << std::endl;
};

Cat::Cat(const Cat &other) : Animal() {
    std::cout << "Cat copy constructor called" << std::endl;
    type=other.type;
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << "Cat copy assignement operator called" << std::endl;
    if (this != &other){
        type = other.type;
    }
    return *this;
};

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}; 

std::string Cat::getType(void) const {
    return type;
}

void Cat::makeSound(void) const{
    std::cout << "Meow Meow!" << std::endl;
};
