/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:25 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/21 19:50:40 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Animal: Default constructor called" << std::endl;  
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	this->type = animal.getType();
	std::cout << "Animal: Copy constructor called" << std::endl; 	
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal: Destructor called" << std::endl; 	
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &animal)
{
	if (this != &animal)
		this->type = animal.getType();
	return (*this);
}

const std::string	&WrongAnimal::getType(void) const
{
    return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal says '*indescribably wrong animal sounds*'" << std::endl;
}