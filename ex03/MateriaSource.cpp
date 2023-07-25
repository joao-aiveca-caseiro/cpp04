/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:51:57 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 02:10:06 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
    for (int i = 0; i < 4; i++)
	{
        storage[i] = 0;
    }	
}

MateriaSource::MateriaSource(const MateriaSource &src) 
{
    for (int i = 0; i < 4; i++)
	{
        delete (storage[i]);
        storage[i] = src.storage[i]->clone();
    }
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src) 
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			delete (storage[i]);
			storage[i] = src.storage[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete (storage[i]);
	}
}

void MateriaSource::learnMateria(AMateria *src)
{
    for (int i = 0; i < 4; i++)
	{
        if (!storage[i]) 
		{
            storage[i] = src->clone();
   			delete (src);
            break;
        }
    }
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
        if (storage[i]->getType() == type) 
		{
			return (storage[i]);
        }
    }
	return(0);
}