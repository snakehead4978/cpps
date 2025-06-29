/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 02:46:49 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/29 14:06:35 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

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
				throw std::out_of_range("Index is out of bounds");
			return (_array[N]);
		}
		unsigned int	size() const;
};


#endif