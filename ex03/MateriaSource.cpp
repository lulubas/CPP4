/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/05 13:07:07 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _numMaterias(0) {
    std::cout << "MateriaSource default constructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        _materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other) : _numMaterias(0) {
    std::cout << "MateriaSource copy constructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        if (other._materias[i]) 
                _materias[i] = other._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other) {
    std::cout << "MateriaSource copy assignement operator called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
        _materias[i] = other._materias[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource destructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        if (_materias[i]) {
            delete _materias[i];
            _materias[i] = NULL;
        }
    }
}

void MateriaSource::learnMateria(AMateria* materia) {
    if (materia) {
        if(_numMaterias < 4)
            _materias[_numMaterias++] = materia->clone();
        _leftoverMaterias.addBack(materia);
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    int i;
    for (i = 0; i < 4; i++) {
        if (!_materias[i])
            break;
        if (_materias[i]->getType() == type)
            return(_materias[i]->clone());
    }
    return (NULL);
}

void MateriaSource::checkMateria(int i) const {
    if (_materias[i])
        std::cout << "Materia is " << _materias[i]->getType() << std::endl;
    else
        std::cout << "No Materia found" << std::endl;
}