/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:51:39 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 15:20:34 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
    public:

        Animal();
		Animal(const Animal &animal);
		virtual ~Animal();
		
		Animal				&operator=(const Animal &animal);
        const std::string	&getType(void) const;
        virtual void		makeSound(void) const;

    protected:
    
        std::string	type;
};

#endif