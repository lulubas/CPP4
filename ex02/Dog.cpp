/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/03 06:32:16 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
    _mybrain = new Brain;

}

Dog::Dog(const Dog &other) : Animal() {
    std::cout << "Dog copy constructor called" << std::endl;
    _type=other._type;
    _mybrain = new Brain(*other._mybrain);
}

Dog& Dog::operator=(const Dog &other) {
    std::cout << "Dog copy assignement operator called" << std::endl;
    if (this != &other){
        _type = other._type;
        *_mybrain = *other._mybrain;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete _mybrain;
}

std::string Dog::getType(void) const {
    return _type;
}

void Dog::makeSound(void) const {
    std::cout << "Woof Woof!" << std::endl;
}

std::string Dog::getBrainIdea(int i) const {
    return(_mybrain->getIdea(i));
}
