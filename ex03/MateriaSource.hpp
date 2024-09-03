/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:32:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/03 09:12:53 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "IMateriaSource.hpp"

#include<string>
#include<iostream>

class MateriaSource : public IMateriaSource {
    public:
        
        ~MateriaSource();
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);   
};

#endif