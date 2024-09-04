/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaNode.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/05 01:43:03 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaNode.hpp"

MateriaNode::MateriaNode() : _materia(NULL), _next(NULL) {
    std::cout << "MateriaNode default constructor called" << std::endl;
}

MateriaNode::MateriaNode(const MateriaNode& other) : _next(NULL) {
    if (other._materia)
        _materia = other._materia->clone();
    else
        _materia = NULL;
}

MateriaNode& MateriaNode::operator=(const MateriaNode &other) {
    std::cout << "MateriaNode copy assignement operator called" << std::endl;
    if (this != &other) {
        if (_materia)
            delete _materia;
        if (other._materia)
            _materia = other._materia->clone();
        else
            _materia = NULL;
    }
    return *this;
}

MateriaNode::~MateriaNode() {
    std::cout << "MateriaNode destructor called" << std::endl;
    if (_materia)
        delete _materia;
}

AMateria* MateriaNode::getMateria(void) {
    return(_materia);
}

void MateriaNode::setMateria(AMateria* materia) {
    if (materia)
        _materia = materia;
}

void MateriaNode::deleteMateria(void) {
    if (_materia)
        delete _materia;
    _materia = NULL;
}

MateriaNode* MateriaNode::getNext(void) {
    return (_next);
}

void MateriaNode::setNext(MateriaNode* newNode) {
    _next = newNode;
}