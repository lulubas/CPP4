/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 02:42:27 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {};


WrongAnimal::WrongAnimal(const WrongAnimal &other){
    type=other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other){
        type = other.type;
    }
    return *this;
};

std::string WrongAnimal::getType(void) const {
    return type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "Some random animal noise" << std::endl;
};

WrongAnimal::~WrongAnimal(){};