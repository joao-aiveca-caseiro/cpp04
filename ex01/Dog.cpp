/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:09 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 15:14:14 by jaiveca-         ###   ########.fr       */
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
	this->brain = new Brain(*(dog.brain));
//	this->brain = dog.brain;
}

Dog::~Dog()
{
	delete(this->brain);
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->type = dog.getType();
		delete(this->brain);
		this->brain = new Brain(*(dog.brain));		
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog says 'woof!'" << std::endl;
}