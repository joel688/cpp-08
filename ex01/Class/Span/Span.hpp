/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:44:29 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/12 10:44:31 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
# include <exception>
# include <vector>
# include <algorithm>
# include <numeric>

class Span
{
	private:
		std::vector<int>	_numbers;
		unsigned int		_size;
	public:
		Span(void);
		Span(const Span &s);
		Span(unsigned int n);
		~Span();
		Span &operator=(const Span &s);
		template < typename Container >
		void		fillNumbers(const typename Container::iterator &begin, const typename Container::iterator &end);

		void		addNumber(int n);
		long int	shortestSpan();
		long int	longestSpan();
		unsigned int	size( void );
		int				getNum( int i );

	class noSpaceLeft: public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return("Error: Array already full");
			}
	};

	class noNumbers: public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return ("Error: Array has no sufficient numbers");
			}
	};
};

template < typename Container >
void	Span::fillNumbers(const typename Container::iterator &begin, const typename Container::iterator &end )
{
	for (typename Container::iterator i = begin; i != end; i++)
	{
		this->addNumber(*i);
	}
}

#endif

