/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaList.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:37 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/05 01:58:50 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaList.hpp"

MateriaList::MateriaList() : _head(NULL) {
    std::cout << "MateriaList default constructor called" << std::endl;
}

MateriaList::MateriaList(const MateriaList& other) : _head(NULL) {
    std::cout << "MateriaList copy constructor called" << std::endl;
    if (other._head) {
        MateriaNode* current = other._head;
        while (current) {
            addBack(current->getMateria()->clone());
            current = current->getNext();
        }
    }
}

MateriaList& MateriaList::operator=(const MateriaList &other) {
    std::cout << "MateriaList copy assignement operator called" << std::endl;
    if (this != &other) {
        MateriaNode* current = _head;
        while (current) {
            MateriaNode* toDelete = current;
            current = current->getNext();
            delete toDelete;
        }
        if (other._head) {
            current = other._head;
            while (current) {
                addBack(current->getMateria()->clone());
                current = current->getNext();
            }
        }
    }
    return *this;
}

MateriaList::~MateriaList() {
    std::cout << "MateriaList destructor called" << std::endl;
    MateriaNode* current = _head;
    while (current) {
        MateriaNode* toDelete = current;
        current = current->getNext();
        delete toDelete;
    }
}

void MateriaList::addBack(AMateria* materia) {
    if (!materia) 
        return;
        
    MateriaNode* newNode = new MateriaNode();
    newNode->setMateria(materia);
    
    if (!_head) {
        _head = newNode;
    }
    else {
        MateriaNode* current = _head;
        while (current->getNext())
            current = current->getNext();
        current->setNext(newNode);
    }
}

