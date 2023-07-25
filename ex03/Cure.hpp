/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:57:22 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/25 00:47:02 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		
		Cure();
		Cure(const Cure &cure);
		~Cure();

		Cure	&operator=(const Cure &cure);
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif