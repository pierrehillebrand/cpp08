#pragma once
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <string>
#include <cstring>
#include <sstream>

template <typename T>
int	easyfind(T tab, int to_find)
{
	typename T::iterator it;
	it = std::find(tab.begin(), tab.end(), to_find);
	if (it == tab.end())
	{
		std::ostringstream oss;
		oss << to_find << " is not in container";
		throw(std::invalid_argument(oss.str()));
	}
	return (*it);
}
