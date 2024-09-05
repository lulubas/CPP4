#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    int i;

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());

    std::cout << "==============" << std::endl;
    std::cout << "MATERIASOURCE" << std::endl;
    std::cout << "==============" << std::endl;
    for (i = 0; i < 4; i++)
        src->checkMateria(i);
    std::cout << "==============" << std::endl;

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << "==============" << std::endl;
    std::cout << "CHARACTER" << std::endl;
    std::cout << "==============" << std::endl;

    for (i = 0; i < 4; i++)
        src->checkMateria(i);

    std::cout << "==============" << std::endl;

    ICharacter* bob = new Character("bob");

    std::cout << "==============" << std::endl;
    std::cout << "CHARACTER USE" << std::endl;
    std::cout << "==============" << std::endl;
    for (i = 0; i < 5; i++)
        me->use(i, *bob);
    std::cout << "==============" << std::endl;

    std::cout << "==============" << std::endl;
    std::cout << "DESTRUCTORS" << std::endl;
    std::cout << "==============" << std::endl;
    
    delete bob;
    delete me;
    delete src;

    return 0;
}