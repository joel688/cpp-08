/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:40:46 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/14 09:45:20 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

// ----------Constructors----------

template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	return;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other)
{
	return;
}

// ----------Deconstructors----------

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	return;
}

// ----------Setters----------

// ----------Getters----------

// ----------Operators_Overloaders----------

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other)
{
    if (this != &other)
    {
        std::stack<T>::operator=(other);
    }
    return *this;
}

// ----------Members_Functions----------

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return this->c.end();
}

// ----------Non_Members_Functions----------






