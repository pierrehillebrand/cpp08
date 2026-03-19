#include "MutantStack.hpp"

int main()
{
	std::cout << "MutantStack:" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top before pop: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size after pop: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "reverse:" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack<int> s(mstack);
	std::cout << "\nList:" << std::endl;
	std::list<int> test_list;
	test_list.push_back(5);
	test_list.push_back(17);
	std::cout << "top before pop: " << test_list.back() << std::endl;
	test_list.pop_back();
	std::cout << "size after pop: " << test_list.size() << std::endl;
	test_list.push_back(3);
	test_list.push_back(5);
	test_list.push_back(737);
	test_list.push_back(0);
	std::list<int>::iterator it_list = test_list.begin();
	std::list<int>::iterator ite_list = test_list.end();
	++it_list;
	--it_list;
	while (it_list != ite_list)
	{
		std::cout << *it_list << std::endl;
		++it_list;
	}
	std::cout << "reverse:" << std::endl;
	std::list<int>::reverse_iterator rit_list = test_list.rbegin();
	std::list<int>::reverse_iterator rite_list = test_list.rend();
	while (rit_list != rite_list)
	{
		std::cout << *rit_list << std::endl;
		++rit_list;
	}
	return 0;
}