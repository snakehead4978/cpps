/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 02:33:00 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/26 08:16:18 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
		Awesome &operator=(int a) {_n = a; return *this; }
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print2( T  & x ) { std::cout << x << std::endl; x = 1 ; return; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	::iter( tab, 5, print );
	::iter( tab, 5, print2<int> );
	::iter( tab2, 5, print );
	::iter( tab2, 5, print2<Awesome> );
	return 0;
}



// void func1(const int &a)
// {
// 	std::cout << a;
// }

// void func2(int &a)
// {
// 	std::cout << a;
// }

// void func3(int &a)
// {
// 	std::cout << ++a;
// }

// int main()
// {
// 	int array[4] = {0, 1, 2, 3};
// 	::iter(array, 4, func1);
// 	std::cout << std::endl;
// 	::iter(array, 4, func2);
// 	std::cout << std::endl;
// 	::iter(array, 4, func3);
// 	std::cout << std::endl;
// 	const int array2[4] = {0, 1, 2, 3};
// 	::iter(array2, 4, func1);
// 	std::cout << std::endl;
// 	// ::iter(array2, 4, func2);
// 	// std::cout << std::endl;
// 	// ::iter(array2, 4, func3);
// 	// std::cout << std::endl;
// 	return (0);
// }
