#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::~Span()
{}

void	Span::addNumber(int to_add)
{
	if (_span.size() >= N)
		throw std::out_of_range("The span is already full");
	_span.push_back(to_add);
}

int		Span::shortestSpan()
{
	if (_span.size() < 2)
		throw std::invalid_argument("Not enough numbers in span");
	std::sort(_span.begin(), _span.end());
	int low = abs(_span[1] - _span[0]);
	for (unsigned int i = 1; i < _span.size() - 1; i++)
	{
		if (abs(_span[i + 1] - _span[i]) < low)
			low = abs(_span[i + 1] - _span[i]);
	}
	return (low);
}

int		Span::longestSpan()
{
	if (_span.size() < 2)
		throw std::invalid_argument("Not enough numbers in span");
	std::sort(_span.begin(), _span.end());
	return (abs(_span.front() - _span.back()));
}