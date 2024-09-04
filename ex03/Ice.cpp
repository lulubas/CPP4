/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/03 11:30:10 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : _type("ice") {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& other) {
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &other) {
    std::cout << "Ice copy assignement operator called" << std::endl;
    return *this;
}

Ice::~Ice(){
    std::cout << "Ice destructor called" << std::endl;
}

Ice* Ice::clone() const {
    Ice* newClone = new Ice;
    return(newClone);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}