/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:59:39 by snek              #+#    #+#             */
/*   Updated: 2025/02/27 09:36:43 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
# define PHONEBOOK
# include "Misc.hpp"
# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		int		index;
		Contact contacts[8];
	public:
		PhoneBook()
		{
			index = 0;
		}
		void	addContact();
		void	searcher();
};

#endif