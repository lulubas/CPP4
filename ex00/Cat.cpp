/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/29 17:05:52 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
    _type=other._type;
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << "Cat copy assignement operator called" << std::endl;
    if (this != &other){
        _type = other._type;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType(void) const {
    return _type;
}

void Cat::makeSound(void) const{
    std::cout << "Meow Meow!" << std::endl;
}
