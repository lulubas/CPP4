/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/29 17:07:08 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal() {
    std::cout << "WrongCat copy constructor called" << std::endl;
    _type=other._type;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
    std::cout << "WrongCat copy assignement operator called" << std::endl;
    if (this != &other){
        _type = other._type;
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "Meow Woof Burg!" << std::endl;
}
