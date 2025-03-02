/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 22:30:35 by snek              #+#    #+#             */
/*   Updated: 2025/03/01 21:59:54 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H
# define __HARL_H

# include <string>
# include <iostream>
# include <stdlib.h>

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};


#endif