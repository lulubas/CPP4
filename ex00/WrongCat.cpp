/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 03:40:43 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat") {};


WrongCat::WrongCat(const WrongCat &other) : WrongAnimal() {
    type=other.type;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
    if (this != &other){
        type = other.type;
    }
    return *this;
};

WrongCat::~WrongCat(){}; 

void WrongCat::makeSound(void) const {
    std::cout << "Meow Woof Burg!" << std::endl;
};
