/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:36:47 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/03 06:27:10 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain() {
    int i;
    std::cout << "Brain default constructor called" << std::endl;    
    for (i = 0; i < 100; i++) {
        _ideas[i] = "Idea" + iToString(i);
    }
}

Brain::Brain(const Brain &other) {
    int i;
    std::cout << "Brain copy constructor called" << std::endl;
    for (i = 0; i < 100; i++) {
        _ideas[i] = other._ideas[i];
    }
}

Brain& Brain::operator=(const Brain &other) {
    std::cout << "Brain copy constructor called" << std::endl;
    if (this != &other) {
        int i;
        for (i = 0; i < 100; i++) {
        _ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;    
}

std::string Brain::getIdea(int i) {
    return(_ideas[i]);
}

std::string iToString(const int i) {
    std::ostringstream oss;
    oss << i;
    return oss.str();
}
