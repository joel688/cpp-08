/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:44:16 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/12 10:44:17 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Span/Span.hpp"
#include <list>
#include <deque>
#include <unistd.h>
#include <limits.h>

void testComparation(Span &a, Span &b)
{
    std::cout << "Testing SIZES...: ";
    if (a.size() != b.size())
        std::cout << "FAIL" << std::endl;
    else
        std::cout << "Sizes are the same!" << std::endl;

    std::cout << "Testing NUMBERS...: ";
    bool aux = true;
    for (size_t i = 0; i < a.size(); i++)
    {
        if (a.getNum(i) != a.getNum(i))
        {
            std::cout << "FAIL" << std::endl;
            aux = false;
        }
    }
    if (aux)
        std::cout << "Numbers are the same!" << std::endl;
}

void    testContainers(void)
{
    {
        std::cout << "Example using span with a VECTOR..." << std::endl;
        std::vector<int>    vec;
        Span    spanVec(10000);
        for (int i = 0; i < 10000; i++)
            vec.push_back(rand() % 9999);
        spanVec.fillNumbers<std::vector <int> >(vec.begin(), vec.end());

        std::cout << "Shortest span: " << spanVec.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spanVec.longestSpan() << std::endl;
    }

    std::cout << std::endl;

    {
        sleep(1); // This sleep is for changing the rand() returns.
        std::cout << "Example using span with a LIST..." << std::endl;
        std::list<int>  lst;
        Span    spanLst(10000);
        for (int i = 0; i < 10000; i++)
            lst.push_back(rand() % 9999);
        spanLst.fillNumbers<std::list <int> >(lst.begin(), lst.end());

        std::cout << "Shortest span: " << spanLst.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spanLst.longestSpan() << std::endl;
    }

    std::cout << std::endl;
    
    {
        sleep(1); // This sleep is for changing the rand() returns.
        std::cout << "Example using span with a LIST..." << std::endl;
        std::deque<int>  lst;
        Span    spanLst(10000);
        for (int i = 0; i < 10000; i++)
            lst.push_back(rand() % 9999);
        spanLst.fillNumbers<std::deque <int> >(lst.begin(), lst.end());

        std::cout << "Shortest span: " << spanLst.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spanLst.longestSpan() << std::endl << std::endl;
    }
}

int main( void )
{
    srand(time(NULL));

    std::vector<int>    vec;
    for (int i = 0; i < 10000; i++)
            vec.push_back(rand() % 9999);
    std::cout << "Trying to FILL a number when _numbers is Full: " << std::endl;
    Span        fullSpan(10000);
    fullSpan.fillNumbers<std::vector <int> >(vec.begin(), vec.end());
    try
    {
        fullSpan.fillNumbers<std::vector <int> >(vec.begin(), vec.end());
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Trying to ADD a number when _numbers is Full: " << std::endl;
    try
    {
        fullSpan.addNumber(1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "Trying to perform a action using a class with no numbers: " << std::endl;
    Span    noNumSpan(0);
    try
    {
        noNumSpan.shortestSpan();
        std::cout << "FAILED" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Trying to perform a action using a class with no numbers: " << std::endl;
    try
    {
        noNumSpan.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }

    std::cout << "Trying to perform a action using a class with no more than 1 number: " << std::endl;
    Span    oneNumSpan(1);
    oneNumSpan.addNumber(1);
    try
    {
        oneNumSpan.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Trying to perform a action using a class with no more than 1 number: " << std::endl;
    try
    {
        oneNumSpan.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }

    std::cout << "Working with INT_MAX and INT_MIN:" << std::endl;
    Span    maxSpan(2);
    maxSpan.addNumber(INT_MAX);
    maxSpan.addNumber(INT_MIN);
    std::cout << "Shortest span: " << maxSpan.shortestSpan() << std::endl;
    std::cout << "Longest span: " << maxSpan.longestSpan() << std::endl << std::endl;

    std::cout << "Testing copy constructor..." << std::endl;
    Span    generalSpan(10000);
    generalSpan.fillNumbers<std::vector <int> >(vec.begin(), vec.end());
    Span    copySpan(generalSpan);
    testComparation(generalSpan, copySpan);

    std::cout << std::endl << "Testing = operator..." << std::endl;
    Span    generalSpan2(10000);
    Span    copySpan2;
    generalSpan2.fillNumbers<std::vector <int> >(vec.begin(), vec.end());
    copySpan2 = generalSpan2;
    testComparation(generalSpan2, copySpan2);
}
/*
int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return 0;
}*/
