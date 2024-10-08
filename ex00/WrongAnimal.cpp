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

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    _type=other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "WrongAnimal copy assignement operator called" << std::endl;
    if (this != &other){
        _type = other._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return _type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "Some random wronganimal noise" << std::endl;
}
