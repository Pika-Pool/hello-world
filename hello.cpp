#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "Hello World\n";

	std::cout << "Your arguments\n";
	for (int i = 0; i < argc; ++i)
	{
		std::cout << i << ".\t" << argv[i] << '\n';
	}

	return 0;
}
