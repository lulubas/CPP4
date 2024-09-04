/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaNode.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 00:26:07 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/05 01:41:25 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIANODE_HPP
#define MATERIANODE_HPP

#include "AMateria.hpp"

class MateriaNode {
    private:
        AMateria* _materia;
        MateriaNode* _next;
        
    public:
        MateriaNode();
        MateriaNode(const MateriaNode &other);
        MateriaNode& operator=(const MateriaNode &other);
        ~MateriaNode();
        
        
        AMateria* getMateria(void);
        void setMateria(AMateria* materia);
        void deleteMateria(void);
        MateriaNode* getNext(void);
        void setNext(MateriaNode* newNode);

};

#endif