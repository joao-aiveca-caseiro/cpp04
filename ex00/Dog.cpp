/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:09 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/19 00:52:09 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";  
}

Dog::Dog(const Dog &dog): Animal(dog)
{
	this->type = dog.getType();
	std::cout << "Dog: Copy constructor called" << std::endl; 	
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl; 	
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
		this->type = dog.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog says 'woof!'" << std::endl;
}