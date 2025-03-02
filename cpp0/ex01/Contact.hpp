/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:19:41 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 20:57:02 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT
# include "Misc.hpp"
# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	fields[5];
	public:
		void	addContact();
		void	display();
		void	displayShort();
};

#endif