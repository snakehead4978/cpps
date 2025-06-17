/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 22:53:20 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/11 04:41:25 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <stdexcept>
# include <numeric>


class	Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_list;
	public:
		Span();
		Span(unsigned int);
		~Span();
		Span(const Span &);
		Span	&operator=(const Span &);
		void	addNumber(int);
		int		shortestSpan();
		int		longestSpan();
		template <typename Iterator>
		void	addNumbers(Iterator first, Iterator last)
		{
			for (;first != last; ++first)
				addNumber(*first);
		}
};




#endif