/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:52:38 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/21 20:00:11 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->type = "WrongCat";  
}

WrongCat::WrongCat(const WrongCat &cat): WrongAnimal(cat)
{
	this->type = cat.getType();
	std::cout << "WrongCat: Copy constructor called" << std::endl; 	
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl; 	
}

WrongCat	&WrongCat::operator=(const WrongCat &cat)
{
	if (this != &cat)
		this->type = cat.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat says 'wrongmeow!'" << std::endl;
}