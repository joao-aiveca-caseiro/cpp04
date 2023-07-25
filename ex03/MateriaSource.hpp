/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:51:53 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/24 22:44:57 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		
		MateriaSource();
		MateriaSource(const MateriaSource &source);
		~MateriaSource();
		
		MateriaSource	&operator=(const MateriaSource &source);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);	

	private:

		AMateria *storage[4]; 
};

#endif