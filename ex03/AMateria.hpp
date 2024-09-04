/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:32:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/04 19:32:03 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

#include<string>
#include<iostream>

class AMateria {
    protected:
        std::string _type;
    
    public:
        AMateria();
        AMateria(std::string& type);
        AMateria(const AMateria &other);
        AMateria& operator=(const AMateria &other);
        virtual ~AMateria();
        
        virtual std::string const & getType() const;
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);         
};

#endif