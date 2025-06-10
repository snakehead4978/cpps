/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:18:34 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/10 02:37:04 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename U>
void	iter(T *address, int len, void (*func)(U &))
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

template<typename T, typename U>
void	iter(T *address, int len, void (*func)(U))
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