/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:46:44 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/09 19:16:10 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T		min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T		max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif