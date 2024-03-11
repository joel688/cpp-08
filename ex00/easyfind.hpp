#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
# include <exception>
# include <algorithm>

class OutOfRange: public std::exception
{
	public:
		const char *what() const throw()
		{
			return("Error: Not Found");
		}
};

template <typename T>
int easyfind(T const container, int to_find)
{
	if(std::find(container.begin(), container.end(), to_find) == container.end())
		throw (OutOfRange());
	std::cout << "Found " << to_find << std::endl;
	return (to_find);
}

#endif
