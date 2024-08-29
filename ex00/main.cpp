/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 02:14:20 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/29 16:31:56 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    
    std::cout << "==============" << std::endl;
    std::cout << "CONSTRUCTORS" << std::endl;
    std::cout << "==============" << std::endl;

    const Animal* a = new Animal();

    const Animal* d = new Dog();
    const Animal* c = new Cat();

    const WrongAnimal* wc = new WrongCat();
    WrongCat garfield;

    std::cout << "==============" << std::endl;
    std::cout << "GET_TYPE" << std::endl;
    std::cout << "==============" << std::endl;

    std::cout << a->getType() << " " << std::endl;
    std::cout << d->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    std::cout << wc->getType() << " " << std::endl;
    std::cout << garfield.getType() << " " << std::endl;
    
    
    std::cout << "==============" << std::endl;
    std::cout << "MAKE_SOUND" << std::endl;
    std::cout << "==============" << std::endl;
    
    a->makeSound();
    d->makeSound();
    c->makeSound();
    wc->makeSound();
    garfield.makeSound();
    
    std::cout << "==============" << std::endl;
    std::cout << "DESTRUCTORS" << std::endl;
    std::cout << "==============" << std::endl;

    delete a;
    delete d;
    delete c;
    delete wc;

    return 0;
}