/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:22:58 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 05:14:54 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        storage[i] = 0;
}

Character::Character(std::string name): _name(name)
{
    for (int i = 0; i < 4; i++)
        storage[i] = 0;	
}

Character::Character(const Character &character)
{
    for (int i = 0; i < 4; i++)
	{
        delete (storage[i]);
        storage[i] = character.storage[i]->clone();
    }
	this->_name = character.getName();
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
         delete (storage[i]);
}

Character &Character::operator=(const Character &character)
{
	if (this != &character)
	{
		for (int i = 0; i < 4; i++)
		{
			delete (storage[i]);
			storage[i] = character.storage[i]->clone();
		}
		this->_name = character.getName();
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
	{
        if (m && !storage[i] && m->equipped == 0) 
		{
            storage[i] = m->clone();	
            break;
        }
    }
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && storage[idx])
	{
		storage[idx]->equipped = 0;
		storage[idx] = 0;
	}
	
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && storage[idx])
	{
		storage[idx]->use(target);
	}
}