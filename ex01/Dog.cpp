/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:09 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/23 03:41:28 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog &dog): Animal(dog)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type = dog.getType();
	this->brain = dog.brain;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete(this->brain);	
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->type = dog.getType();
		this->brain = dog.brain;		
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog says 'woof!'" << std::endl;
}