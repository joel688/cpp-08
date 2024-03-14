/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:40:49 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/14 09:46:02 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/MutantStack/MutantStack.hpp"
#include "./Class/MutantStack/MutantStack.cpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "-----------------------------------------------" << std::endl;

    std::list<int> sstack;
    sstack.push_back(5);
    sstack.push_back(17);
    std::cout << sstack.back() << std::endl;
    sstack.pop_back();
    std::cout << sstack.size() << std::endl;
    sstack.push_back(3);
    sstack.push_back(5);
    sstack.push_back(737);
    sstack.push_back(0);
    std::list<int>::iterator it2 = sstack.begin();
    std::list<int>::iterator ite2 = sstack.end();
    ++it2;
    --it2;
    while (it2 != ite2) {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    return 0;
}
