/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/04 22:35:14 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : _type("cure") {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria() {
    std::cout << "Cure copy constructor called" << std::endl;
    _type = other._type;
}

Cure& Cure::operator=(const Cure &other) {
    std::cout << "Cure copy assignement operator called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Cure::~Cure(){
    std::cout << "Cure destructor called" << std::endl;
}

std::string const & Cure::getType(void) const {
    return _type;
}

Cure* Cure::clone() const {
    Cure* newClone = new Cure;
    return(newClone);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wound" <<std::endl;
}