/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/04 19:33:02 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : _type("ice") {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria() {
    std::cout << "Ice copy constructor called" << std::endl;
    _type = other._type;
}

Ice& Ice::operator=(const Ice &other) {
    std::cout << "Ice copy assignement operator called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Ice::~Ice(){
    std::cout << "Ice destructor called" << std::endl;
}

std::string const &Ice::getType(void) const {
    return _type;
}

Ice* Ice::clone() const {
    Ice* newClone = new Ice();
    return(newClone);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}