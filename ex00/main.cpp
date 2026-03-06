#include "easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(0);

	try
	{
		std::cout << easyfind(vec, 1) << " is in the container\n";
		std::cout << easyfind(vec, 3) << " is in the container\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}