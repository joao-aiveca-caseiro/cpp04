/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:51:50 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 00:29:11 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called" << std::endl;  
}

Animal::Animal(const Animal &animal)
{
	this->type = animal.getType();
	std::cout << "Animal: Copy constructor called" << std::endl; 	
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl; 	
}

Animal	&Animal::operator=(const Animal &animal)
{
	if (this != &animal)
		this->type = animal.getType();
	return (*this);
}

const std::string	&Animal::getType(void) const
{
    return (this->type);
}

// void	Animal::makeSound(void) const
// {
// 	std::cout << "Animal says '...'" << std::endl;
// }