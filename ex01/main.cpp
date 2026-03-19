#include "Span.hpp"

int main()
{
	Span sp = Span(7);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(-40);
	sp.addNumber(11);
	sp.addNumber(-1);
	sp.addNumber(-2);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span test1 = Span(10000);
	std::vector<int> to_copy;
	Span test2 = Span(10000);
	Span test3 = Span(10000);
	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
	{
		int temp = rand() % 100000;
		test1.addNumber(temp);
		to_copy.push_back(temp);
	}
	try
	{
		std::cout << test1.shortestSpan() << std::endl;
		std::cout << test1.longestSpan() << std::endl;
		test2.addVector(to_copy);
		std::cout << test2.shortestSpan() << std::endl;
		std::cout << test2.longestSpan() << std::endl;
		test3.addNumber(-1);
		test3.addVector(to_copy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}