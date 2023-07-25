/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:57:13 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 02:07:42 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){}

Cure::Cure(const Cure &cure): AMateria("cure")
{
	this->_type = cure.getType();
}

Cure	&Cure::operator=(const Cure &cure)
{
	if (this != &cure)
	{
		this->_type = cure.getType();	
	}
	return (*this);
}

Cure::~Cure()
{
	
}

AMateria	*Cure::clone() const
{
	AMateria *cloned = new Cure;
	return (cloned);
}

void	Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
}