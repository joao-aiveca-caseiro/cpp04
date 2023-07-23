/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:18 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/23 17:00:53 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main(void)
{
    const Animal *group[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			group[i] = new Cat();
		else
			group[i] = new Dog();
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
			delete(group[i]);
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	Dog doggy;
	{
		Dog temp = doggy;
	}
	
	return (0);
}
