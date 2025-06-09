/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:25:49 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/09 17:43:42 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>

typedef struct Data
{
	void	*data;
}	Data;


class	Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer &);
		Serializer	&operator=(const Serializer &);
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};



#endif