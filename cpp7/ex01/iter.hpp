/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:18:34 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/26 08:15:42 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void	iter(T *address, int len, void (*func)(T const &))
{
	if (!address || len <= 0 || !func)
		return ;
	int i = 0;
	while (i < len)
	{
		func(address[i]);
		i++;
	}
}

template<typename T>
void	iter(T *address, int len, void (*func)(T &))
{
	if (!address || len <= 0 || !func)
		return ;
	int i = 0;
	while (i < len)
	{
		func(address[i]);
		i++;
	}
}

#endif