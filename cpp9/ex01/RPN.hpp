/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 23:06:20 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/19 06:43:36 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>

class	RPN
{
	private:
		std::stack<int>	_stack;
		RPN(const RPN &);
		RPN	&operator=(const RPN &);
	public:
		RPN();
		~RPN();
		void	use(char);
		void	announce();
};




#endif