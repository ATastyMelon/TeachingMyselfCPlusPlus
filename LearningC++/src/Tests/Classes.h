#pragma once

class ClassTest
{
private:
	std::string input;
public:
	void InputTest()
	{
		std::cin >> input;
		std::cout << "You typed " << input << std::endl;
	}
};