#include <iostream>

#include "Tests.hpp"

int main()
{
	ClassTest ct;

	TestNamespace::Test();

	std::cout << "Please type Something" << std::endl;

	ct.InputTest();

	return 0;
}