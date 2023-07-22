/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:51:56 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/19 00:51:56 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";  
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	this->type = cat.getType();
	std::cout << "Cat: Copy constructor called" << std::endl; 	
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl; 	
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
		this->type = cat.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat says 'meow!'" << std::endl;
}