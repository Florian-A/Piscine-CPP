/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

int main() {
    // Creation of a kind of chest that will contain items
    IMateriaSource* evilChest = new MateriaSource();
    evilChest->learnMateria(new Ice());
    evilChest->learnMateria(new Cure());

    // Creation of character who's name Belzébuth and get of the
    // item named ice and cure
    ICharacter* belzebuth  = new Character("Belzébuth");
    AMateria* tmpMateria;
    tmpMateria = evilChest->createMateria("ice");
    belzebuth->equip(tmpMateria);
    delete tmpMateria;
    tmpMateria = evilChest->createMateria("cure");
    belzebuth->equip(tmpMateria);
    delete tmpMateria;

    // Creation of character who's name Moloch
    ICharacter* moloch = new Character("Moloch");

    // Belzébuth use the item on Moloch :-(
    belzebuth->use(0, *moloch);
    belzebuth->use(1, *moloch);

    // Anothers tests
    tmpMateria = evilChest->createMateria("ice");
    ICharacter* fakeAzazel = belzebuth;
    fakeAzazel->equip(tmpMateria);
    delete tmpMateria;
    std::cout << "My name is : " + fakeAzazel->getName() << std::endl;
    fakeAzazel->use(2, *moloch);

    // Clean up all this mess !
    delete moloch;
    delete fakeAzazel;
    delete evilChest;

    return (0);
}
