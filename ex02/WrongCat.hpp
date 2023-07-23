/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:52:45 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/21 19:53:35 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
    public:

        WrongCat();
		WrongCat(const WrongCat &cat);
		~WrongCat();
		
		WrongCat	&operator=(const WrongCat &cat);
        void		makeSound(void) const;

};

#endif
