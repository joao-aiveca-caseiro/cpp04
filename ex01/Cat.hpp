/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:03 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/23 03:35:35 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
    public:

        Cat();
		Cat(const Cat &cat);
		~Cat();
		
		Cat		&operator=(const Cat &cat);
        void	makeSound(void) const;
	
	private:
	
		Brain	*brain;

};

#endif