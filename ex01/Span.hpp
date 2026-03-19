#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
private:
	std::vector<int>	_span;
	unsigned int		N;
public:
	Span(unsigned int N);
	~Span();

	void	addNumber(int to_add);
	int		shortestSpan();
	int		longestSpan();
	void	addVector(std::vector<int> to_add);
};

