/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaList.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 00:26:07 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/05 01:43:31 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIALIST_HPP
#define MATERIALIST_HPP

#include "MateriaNode.hpp"
#include "AMateria.hpp"

class MateriaList {
    private:
        MateriaNode* _head;

    public:
        MateriaList();
        MateriaList(const MateriaList &other);
        MateriaList& operator=(const MateriaList &other);
        ~MateriaList();
    
        void addBack (AMateria* materia);
};

#endif