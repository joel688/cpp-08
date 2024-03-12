/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:43:35 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/12 15:21:15 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

// ----------Constructors----------

template <typename T>
MutantStack<T>::MutantStack()
{
	return;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : _stack(other._stack)
{
	return;
}

// ----------Deconstructors----------

template <typename T>
MutantStack<T>::~MutantStack()
{
	return;
}

// ----------Operators_Overloaders----------

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
	if(this != &other)
	{
		_stack = other._stack;
	}
	return *this;
}

// ----------Members_Functions----------

template <typename T>
void MutantStack<T>::push(const T& value)
{
	_stack.push(value);
	return;
}

template <typename T>
void MutantStack<T>::pop()
{
	_stack.pop();
	return;
}

template <typename T>
T& MutantStack<T>::top()
{
	return _stack.top();
}

template <typename T>
size_t MutantStack<T>::size() const
{
	return _stack.size();
}

template <typename T>
bool MutantStack<T>::empty() const
{
	return _stack.empty();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return _stack.c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return _stack.c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
	return _stack.cbegin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
	return _stack.cend();
}
