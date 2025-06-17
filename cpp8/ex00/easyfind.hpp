/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 04:07:59 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/10 22:51:53 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template <typename Container>
typename Container::iterator	easyfind(Container &container, int num)
{
	typename	Container::iterator	found = std::find(container.begin(), container.end(), num);
	if (found == container.end())
		throw std::invalid_argument("Number not found");
	return (found);
}


#endif