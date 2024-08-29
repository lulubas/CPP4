/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:37:04 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 17:39:08 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<string>
#include<iostream>

Class Brain {
    public:
        Brain();
        Brain(const Brain &other);
        Brain& operator=(cont Brain &other);
        virtual ~Brain();
    private:
        std::string ideas[100];
};

#endif