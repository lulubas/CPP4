/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 02:14:20 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/25 03:43:46 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    
    const Animal* a = new Animal();
    const Animal* d = new Dog();
    const Animal* c = new Cat();
    const WrongAnimal* wc = new WrongCat();

    std::cout << a->getType() << " " << std::endl;
    std::cout << d->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    std::cout << wc->getType() << " " << std::endl;

    a->makeSound();
    d->makeSound();
    c->makeSound();
    wc->makeSound();

    delete a;
    delete d;
    delete c;
    delete wc;

    return 0;
}