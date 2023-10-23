#include <iostream>

int main()
{
	short int input;
	//std::cout << std::endl<<sizeof(input)<<std::endl;
	std::cin >> input;
	int len;
	std::cin >> len;
	input = (input >> len)|(input <<(sizeof(input)*8-len));
	std::cout << input;
	return 0;
}