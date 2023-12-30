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
    const Animal *animal1[20];
    Animal animal2;

    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0)
            animal1[i] = new Dog();
        else
            animal1[i] = new Cat();
    }
    for (size_t i = 0; i < 20; i++) {
        animal1[i]->makeSound();
    }

    animal2 = *animal1[5];
    for (int i = 0; i < 20; i++) {
        delete animal1[i];
    }
    animal2.makeSound();
    Dog arial;
    arial.getBrain()->setIdea(0, "Je mange des croquettes");
    arial.getBrain()->setIdea(1, "Je fais des calins");
    std::cout << arial.getBrain()->getIdea(0) << std::endl;
    std::cout << arial.getBrain()->getIdea(1) << std::endl;

    // Dog dog; {   <-- for test during soutenance
    //     Dog tmp = dog;
    // }

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
