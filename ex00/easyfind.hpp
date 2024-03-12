/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:44:50 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/12 10:44:50 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
