/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:51:56 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/23 16:40:02 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	std::cout << "Cat: Copy constructor called" << std::endl; 	
	this->type = cat.getType();
	this->brain = new Brain(*(cat.brain));
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete(this->brain);
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		this->type = cat.getType();
		delete(this->brain);
		this->brain = new Brain(*(cat.brain));			
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat says 'meow!'" << std::endl;
}