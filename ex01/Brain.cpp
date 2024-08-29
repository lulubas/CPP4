/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:36:47 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/29 17:30:09 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain() {
    int i;
    std::cout << "Brain default constructor called" << std::endl;    
    for (i = 0; i < 100; i++) {
        ideas[i] = "Idea" + i;
    }
}

Brain::Brain(const Brain &other) {
    int i;
    std::cout << "Brain copy constructor called" << std::endl;
    for (i = 0; i < 100; i++) {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain &other) {
    std::cout << "Brain copy constructor called" << std::endl;
    if (this != &other) {
        int i;
        for (i = 0; i < 100; i++) {
        ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;    
}