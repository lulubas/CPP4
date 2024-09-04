/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/04 16:14:30 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "MateriaSource default constructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        _materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    std::cout << "MateriaSource copy constructor called" << std::endl;
    int i;
    for (i = 0; i < 4; i++) {
        *_materias[i] = *other._materias[i];
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other) {
    std::cout << "MateriaSource copy assignement operator called" << std::endl;
    
    int i;
    for (i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
        *_materias[i] = *other._materias[i];
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
    int i;
    for (i = 0; i < 4; i++) {
        std::cout << "LOOP" << std::endl;
        if (_materias[i])
            continue;
        _materias[i] = materia->clone();
        break;
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