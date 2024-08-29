/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 17:26:42 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat") {
    std::cout << "WrongCat constructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal() {
    std::cout << "WrongCat copy constructor called" << std::endl;
    type=other.type;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
    std::cout << "WrongCat copy assignement operator called" << std::endl;
    if (this != &other){
        type = other.type;
    }
    return *this;
};

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}; 

void WrongCat::makeSound(void) const {
    std::cout << "Meow Woof Burg!" << std::endl;
};
