/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/05 13:06:27 by lbastien         ###   ########.fr       */
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

    for (int i = 0; i < 4; i++) {
        if (_materias[i] == m) {
            std::cout << "Materia " << m->getType() << " is already equipped!" << std::endl;
            return;
        }
    }

    for (i = 0; i < 4; i++) {
        if (_materias[i] == NULL) {
            _materias[i] = m;
            return;
        }
    }
    std::cout << "No available slots to equip the Materia! " << m->getType() << std::endl; 
    _leftoverMaterias.addBack(m);
       
}

void Character::unequip(int idx) {
        if (_materias[idx]) {
            _leftoverMaterias.addBack(_materias[idx]);
            _materias[idx] = NULL;
        }
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > 3) {
        std::cout << "Choose ID between 0 and 3 (incuded)" << std::endl;
        return;
    }
    if (_materias[idx])
            _materias[idx]->use(target);
}

void Character::checkMateria(int i) const {
    if (_materias[i])
        std::cout << "Materia is " << _materias[i]->getType() << std::endl;
    else
        std::cout << "No Materia found" << std::endl;
}
