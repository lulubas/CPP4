/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/05 01:55:17 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("character") {
    std::cout << "Character default constructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        _materias[i] = NULL;
    }
}

Character::Character(const std::string name) : _name (name) {
    std::cout << "Character parameterized constructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        _materias[i] = NULL;
    }
}

Character::Character(const Character& other) {
    std::cout << "Character copy constructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        if (other._materias[i]) 
                _materias[i] = other._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}

Character& Character::operator=(const Character &other) {
    std::cout << "Character copy assignement operator called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
        _materias[i] = other._materias[i]->clone();
    }
    return *this;
}

Character::~Character(){
    std::cout << "Character destructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        if (_materias[i]) {
            delete _materias[i];
            _materias[i] = NULL;
        }
    }
}

std::string const &Character::getName() const {
    return(_name);
}

void Character::equip(AMateria* m) {
    int i;
    for (i = 0; i < 4; i++) {
        if (_materias[i] == NULL) {
            _materias[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
        if (_materias[idx]) {
            _unequippedMaterias.addBack(_materias[idx]);
            _materias[idx] = NULL;
        }
}

void Character::use(int idx, ICharacter& target) {
    if (_materias[idx])
            _materias[idx]->use(target);
}

std::string Character::checkMateria(int i) const {
    if (_materias[i])
        return (_materias[i]->getType());
    else
        return ("NO MATERIAS FOUND");
}
