/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:32:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/05 13:06:47 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
#define IMATERIA_HPP

#include "IMateriaSource.hpp"
#include "MateriaList.hpp"


class MateriaSource : public IMateriaSource {
    private:
        AMateria* _materias[4];
        int _numMaterias; 
        MateriaList _leftoverMaterias;

        
    public:
        MateriaSource();
        MateriaSource(std::string& name);
        MateriaSource(const MateriaSource &other);
        MateriaSource& operator=(const MateriaSource &other);
        ~MateriaSource();
        
        void learnMateria(AMateria* materia);
        AMateria* createMateria(std::string const & type); 
        
        void checkMateria(int i) const;
};

#endif