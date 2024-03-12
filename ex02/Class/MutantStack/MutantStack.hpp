/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:43:41 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/12 15:34:26 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>

template <typename T>
class MutantStack
{
	private:
    	std::stack<T> _stack;

	public:
    	typedef typename std::stack<T>::container_type::iterator iterator;
    	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    	MutantStack();
    	MutantStack(const MutantStack& other);
    	MutantStack& operator=(const MutantStack& other);
    	~MutantStack();
		void push(const T& value);
    	void pop();
    	T& top();
	    const T& top() const;
	    size_t size() const;
    	bool empty() const;
	    iterator begin();
		iterator end();
	    const_iterator cbegin() const;
    	const_iterator cend() const;

		typedef typename std::stack<T>::container_type container_type;
		container_type& getContainer();
		const container_type& getContainer() const;
};

#endif

