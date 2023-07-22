/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:31 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/21 17:51:26 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{
    public:

        WrongAnimal();
		WrongAnimal(const WrongAnimal &animal);
		virtual ~WrongAnimal();
		
		WrongAnimal			&operator=(const WrongAnimal &animal);
        const std::string	&getType(void) const;
        void				makeSound(void) const;

    protected:
    
        std::string	type;
};

#endif