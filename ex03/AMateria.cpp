/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/04 15:03:50 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("amateria") {
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string& type) : _type(type) {
    std::cout << "AMateria parameerized constructor called" << std::endl;
}


AMateria::AMateria(const AMateria& other) {
    std::cout << "AMateria copy constructor called" << std::endl;
    _type=other._type;
}

AMateria& AMateria::operator=(const AMateria &other) {
    std::cout << "AMateria copy assignement operator called" << std::endl;
    if (this != &other)
        _type=other._type;
    return *this;
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType(void) const {
    return _type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "Is confused with what to do to " << target.getName() <<std::endl;
}