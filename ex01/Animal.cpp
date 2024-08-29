/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/29 17:06:30 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
}


Animal::Animal(const Animal &other) {
    std::cout << "Animal copy constructor called" << std::endl;
    _type=other._type;
}

Animal& Animal::operator=(const Animal &other) {
    std::cout << "Animal copy assignement operator called" << std::endl;
    if (this != &other){
        _type = other._type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const {
    return _type;
}

void Animal::makeSound(void) const {
    std::cout << "Some random animal noise" << std::endl;
}