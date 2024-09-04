/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/03 11:29:05 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("character") {
    std::cout << "Character default constructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        _materias[i] = NULL;
    }
}

Character::Character(std::string& name) : Character() {
    std::cout << "Character parameerized constructor called" << std::endl;
    _name = name;
}

Character::Character(const Character& other) {
    std::cout << "Character copy constructor called" << std::endl;
    int i;
    _name=other._name;
    for (i = 0; i < 4; i++) {
        *_materias[i] = *other._materias[i];
    }
}

Character& Character::operator=(const Character &other) {
    std::cout << "Character copy assignement operator called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
        *_materias[i] = *other._materias[i];
    }
    return *this;
}

Character::~Character(){
    std::cout << "Character destructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
    }
}

std::string const &Character::getName() const {
    return(_name);
}

void Character::equip(AMateria* m) {
    int i;
    for (i = 0; i < 4; i++) {
        if (_materias[i])
            continue;
        _materias[i] = m;
        break;
    }
}

void Character::unequip(int idx) {
        if (_materias[idx])
            _materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (_materias[idx])
            _materias[idx]->use(target);
}
