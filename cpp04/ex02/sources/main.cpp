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
    // Can't instantiate abstract class
    // const AAnimal *animal;
    // animal = new AAnimal();

    const AAnimal *animal[20];

    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    for (size_t i = 0; i < 20; i++) {
        animal[i]->makeSound();
    }
    for (int i = 0; i < 20; i++)
        delete animal[i];
    Dog *wouaf = new Dog();
    wouaf->getBrain()->setIdea(0, "Je mange des croquettes");
    wouaf->getBrain()->setIdea(1, "Je fais des calins");
    std::cout << wouaf->getBrain()->getIdea(0) << std::endl;
    std::cout << wouaf->getBrain()->getIdea(1) << std::endl;
    delete wouaf;

    Cat cat1;
    Cat cat2;

    cat1.getBrain()->setIdea(0, "Je mange des surmulots\n");
    cat2 = cat1;

    Dog dog1;
    Dog dog2;

    dog1.getBrain()->setIdea(0, "Je mange des croquettes\n");
    dog2 = dog1;

    return (0);
}
