/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 02:46:49 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/10 04:00:44 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class	Array
{
	private:
		T	*_array;
		unsigned int	_size;
	public:
		Array<T>() : _array(0), _size(0) {}
		~Array<T>() { delete[] _array; }
		Array<T>(unsigned int N) : _array(new T[N]), _size(N) {}
		Array<T>(const Array<T> &t) : _array(new T[t._size]), _size(t._size)
		{
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = t._array[i];
		}
		Array<T> &operator=(const Array<T> &t)
		{
			if (this != &t)
			{
				delete[] _array;
				_size = t._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = t._array[i];
			}
			return (*this);
		}
		T	&operator[](unsigned int N)
		{
			if (N >= _size)
				throw OutOfBounds();
			return (_array[N]);
		}
		class OutOfBounds : public std::exception
		{
			public:
				const char	*what() const throw() { return ("Index is out of bounds\n"); }
		};
		unsigned int	size() const { return (_size); }
};


#endif