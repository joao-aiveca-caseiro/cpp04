/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:02:38 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 02:08:06 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){}

Ice::Ice(const Ice &Ice): AMateria("ice")
{
	this->_type = Ice.getType();
}

Ice	&Ice::operator=(const Ice &Ice)
{
	if (this != &Ice)
	{
		this->_type = Ice.getType();	
	}
	return (*this);
}

Ice::~Ice()
{
	
}

AMateria	*Ice::clone() const
{
	AMateria *cloned = new Ice;
	return (cloned);
}

void	Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}