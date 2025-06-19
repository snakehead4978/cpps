/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 23:10:24 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/19 08:37:57 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <string>
#include <stdexcept>
#include <iostream>

RPN::RPN() : _stack() {}

RPN::~RPN() {}

void	RPN::announce()
{
	if (_stack.empty())
		throw std::invalid_argument("no result to display.");
	int num = _stack.top();
	_stack.pop();
	if (!_stack.empty())
		throw std::invalid_argument("unused numbers.");
	std::cout << num << std::endl;
}

static void	add(std::stack<int> &_stack)
{
	int num1 = _stack.top();
	_stack.pop();
	int num2 = num1 + _stack.top();
	_stack.pop();
	_stack.push(num2);
}

static void	sub(std::stack<int> &_stack)
{
	int num1 = _stack.top();
	_stack.pop();
	int num2 = _stack.top() - num1;
	_stack.pop();
	_stack.push(num2);
}

static void	mult(std::stack<int> &_stack)
{
	int num1 = _stack.top();
	_stack.pop();
	int num2 = num1 * _stack.top();
	_stack.pop();
	_stack.push(num2);
}

static void	div(std::stack<int> &_stack)
{
	int num1 = _stack.top();
	if (!num1)
		throw std::invalid_argument("division by zero.");
	_stack.pop();
	int num2 = _stack.top() / num1;
	_stack.pop();
	_stack.push(num2);
}

void	RPN::use(char c)
{
	std::string::size_type i;
	static std::string operators = "+-*/";
	static void (*operatorsFunc[])(std::stack<int> &_stack) = {&add, &sub, &mult, &div};
	i = operators.find(c);
	if (c >= '0' && c <= '9')
		_stack.push(c - '0');
	else if (i != std::string::npos)
	{
		if (_stack.size() < 2)
			throw std::invalid_argument("not enough numbers to operate");
		operatorsFunc[i](_stack);
	}
	else
		throw std::invalid_argument("unidentified input");
}
