#include <iostream>

class Object
{
private:
	const char* objName = "";
	float objWeight = 0;
public:
	void CreateObject(const char* objName, float objWeight)
	{
		this->objName = objName;
		this->objWeight = objWeight;
	}

	void ShowObject()
	{
		std::cout << objName << "\n";
		std::cout << objWeight << "\n";
	}
};

int main()
{
	Object object;

	object.CreateObject("Hello World", 10);
	object.ShowObject();
}

// robot poinsendvwater