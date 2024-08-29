/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 02:14:20 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/29 17:58:19 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    
    std::cout << "==============" << std::endl;
    std::cout << "CONSTRUCTORS" << std::endl;
    std::cout << "==============" << std::endl;

    int i;
    Animal* myanimals[6];
    for (i = 0; i < 6; i++) {
        if (i % 2)
            myanimals[i] = new Dog;
        else
            myanimals[i] = new Cat;            
    }

    std::cout << "==============" << std::endl;
    std::cout << "GET TYPE" << std::endl;
    std::cout << "==============" << std::endl;

    for (i = 0; i < 6; i++) {
        myanimals[i]->getType();     
    }

    return 0;
}