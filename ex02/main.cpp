/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:18 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 00:30:21 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main(void)
{
    //const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
   
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    //meta->makeSound();
	
	//delete(meta);
	delete(j);
	delete(i);

	return (0);
}
