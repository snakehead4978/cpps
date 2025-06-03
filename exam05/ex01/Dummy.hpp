/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:47:09 by jla-chon          #+#    #+#             */
/*   Updated: 2025/06/03 14:49:51 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_H
# define DUMMY_H

# include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();
		Dummy(const Dummy &t);
		Dummy &operator=(const Dummy &t);
		ATarget *clone();
};



#endif