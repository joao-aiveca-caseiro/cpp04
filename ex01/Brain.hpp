/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:27:10 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/21 20:33:41 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public:

		Brain();
		Brain(const Brain &brain);
		~Brain();

		Brain	&operator=(const Brain &brain);
		
	private:
	
		std::string	ideas[100];
};

#endif