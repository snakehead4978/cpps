/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 09:00:30 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/22 05:42:35 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
# define PMERGE_HPP

# include <utility>

template<typename container>
class	PmergeMe
{
	private:
		container	cont;
		std::pair<int, int> p;
		bool		odd;
		PmergeMe(const &PmergeMe);
		PmergeMe	&operator=(const &PmergeMe);
	public:
		PmergeMe() : cont(), odd(false) {}
		~PmergeMe() {}
};






#endif