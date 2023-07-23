/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:13 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/23 03:35:54 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
    public:

        Dog();
		Dog(const Dog &dog);
		~Dog();
		
		Dog		&operator=(const Dog &dog);
        void	makeSound(void) const;

	private:
	
		Brain	*brain;

};

#endif