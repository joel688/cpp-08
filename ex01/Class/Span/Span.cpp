#include "./Span.hpp"

// ----------Constructors----------

Span::Span(void) : _size(0)
{
	return;
}

Span::Span(unsigned int n) : _size(n)
{
	return;
}

Span::Span(const Span &src) : _numbers(src._numbers), _size(src._size)
{
	*this = src;
	return;
}

// ----------Deconstructors----------

Span::~Span()
{
	return;
}

// ----------Setters----------

// ----------Getters----------

// ----------Operators_Overloaders----------

Span& Span::operator=(const Span& src)
{
	(void)src;
	return(*this);
}

// ----------Members_Functions----------
void Span::addNumber(int n)
{
	if (this->_numbers.size() == this->_size)
		throw (Span::noSpaceLeft());
	this->_numbers.push_back(n);
}

long int Span::shortestSpan(void)
{
	if (this->_numbers.size() < 2)
		throw (Span::noNumbers());
	std::vector<long int>	lv(this->_numbers.size());
	for (size_t i = 0; i < this->_numbers.size(); i++)
		lv[i] = this->_numbers[i];
	std::vector<long int>	diff(lv.size());
	std::adjacent_difference(lv.begin(), lv.end(), diff.begin());
	for (size_t i = 0; i < diff.size(); i++)
		if (diff[i] < 0)
			diff[i] = -diff[i];
	return(*(std::min_element(diff.begin() + 1, diff.end() - 1)));
}

long int Span::longestSpan(void)
{
	if (this->_numbers.size() < 2)
		throw (Span::noNumbers());
	this->_numbers.begin();
	return((long int)*(std::max_element(this->_numbers.begin(), this->_numbers.end())) - (long int)*(std::min_element(this->_numbers.begin(), this->_numbers.end())));
}

unsigned int	Span::size( void )
{
	return (this->_size);
}

int				Span::getNum( int i )
{
	if (i < (int)this->_size)
		return (this->_numbers[i]);
	else
		return ( 0 );
}
// ----------Non_Members_Functions----------

