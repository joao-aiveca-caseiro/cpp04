/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:07:51 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 04:30:24 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->equipped = 0;
}

AMateria::AMateria(const AMateria &materia)
{
	this->_type = materia.getType();
	this->equipped = materia.equipped;
}

AMateria::AMateria(std::string const &type): _type(type), equipped(0){}

AMateria::~AMateria()
{
	
}

AMateria	&AMateria::operator=(const AMateria &materia) 
{
	if (this != &materia)
	{
		this->_type = materia.getType();
		this->equipped = materia.equipped;
	}
	return (*this);
}

const std::string	&AMateria::getType() const
{
	return(this->_type);
}