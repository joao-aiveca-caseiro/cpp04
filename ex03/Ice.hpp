/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:02:46 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 01:04:23 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
	
		Ice();
		Ice(const Ice &ice);
		~Ice();

		Ice	&operator=(const Ice &ice);
		AMateria*	clone() const;
		void	use(ICharacter& target);	
};

#endif