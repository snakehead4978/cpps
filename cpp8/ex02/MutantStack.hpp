/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 04:45:10 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/17 07:42:34 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
# define MUTANT_HPP

# include <stack>
# include <iterator>
# include <stdexcept>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		typedef	std::stack<T> stack;
		typedef typename stack::container_type::iterator iterator;
		MutantStack() : stack() {}
		~MutantStack() {}
		MutantStack(const MutantStack &t) : stack(t) {}
		MutantStack	&operator=(const MutantStack &t)
		{
			if (this != &t)
				this->c = t.c;
			return (*this);
		}
		
		iterator	begin() { return (stack::c.begin()); }
		iterator	end() { return (stack::c.end()); }
};




#endif