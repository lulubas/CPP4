/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 02:14:20 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/03 07:50:51 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void printAnimalArray(Animal** animals) {
    int i;
    
    for (i = 0; i < 6; i++) {
        if (animals[i]) {
            std::cout << animals[i]->getType();
            std::cout << " idea[" << i << "] = " << animals[i]->getBrainIdea(i) << std::endl;
        }
        else
            std::cout << "Animal Deleted" << std::endl;  
    }
}

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

    printAnimalArray(myanimals);

    std::cout << "==============" << std::endl;
    std::cout << "DELETE 1 & 2" << std::endl;
    std::cout << "==============" << std::endl;

    for (i = 0; i < 2; i++) {
        delete myanimals[i];
        myanimals[i] = NULL;    
    }

    std::cout << "==============" << std::endl;
    std::cout << "GET TYPE" << std::endl;
    std::cout << "==============" << std::endl;

    printAnimalArray(myanimals);


    std::cout << "==============" << std::endl;
    std::cout << "DELETE 3 > 6" << std::endl;
    std::cout << "==============" << std::endl;

    for (i = 2; i < 6; i++) {
        delete myanimals[i];
        myanimals[i] = NULL;    
    }

    printAnimalArray(myanimals);

    return 0;
}