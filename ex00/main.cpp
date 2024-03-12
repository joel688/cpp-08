/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:44:58 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/12 10:45:00 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"
#include <vector>
#include <list>

int main(int, char**)
{
    {
        std::cout << "STD::VECTOR" << std::endl;
        std::vector<int>    v;

        for (int i = 0; i < 10; i++)
            v.push_back(i);
        std::cout << "Trying to easyfind number 3: " << std::endl;
        ::easyfind(v, 3);
        std::cout << "Trying to easyfind number 42: " << std::endl;
        try
        {
            ::easyfind(v, 42);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    
    std::cout << "-----------------------------------------------" << std::endl;

    {
        std::cout << "STD::LIST" << std::endl;
        std::list<int>  l;
        for (int i = 0; i < 10; i++)
            l.push_back(i);
        std::cout << "Trying to easyfind number 3: " << std::endl;
        ::easyfind(l, 3);
        std::cout << "Trying to easyfind number 42: " << std::endl;
        try
        {
            ::easyfind(l, 42);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "-----------------------------------------------" << std::endl;

    {
        std::cout << "STD::DEQUE" << std::endl;
        std::list<int>  l;
        for (int i = 0; i < 10; i++)
            l.push_back(i);
        std::cout << "Trying to easyfind number 3: " << std::endl;
        ::easyfind(l, 3);
        std::cout << "Trying to easyfind number 42: " << std::endl;
        try
        {
            ::easyfind(l, 42);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}
