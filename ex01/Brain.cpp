/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:26:56 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/23 03:17:21 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;  
}

Brain::Brain(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = brain.getIdeas(i);
	}	
	std::cout << "Brain: Copy constructor called" << std::endl; 	
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl; 	
}

Brain	&Brain::operator=(const Brain &brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = brain.getIdeas(i);
		}
		
	}
	return (*this);
}

std::string	Brain::getIdeas(int i) const
{
    return (this->ideas[i]);
}
