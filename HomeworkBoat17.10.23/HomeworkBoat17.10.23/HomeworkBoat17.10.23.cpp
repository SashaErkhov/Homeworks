#include <iostream>

int main()
{
	std::cout << "x = ";
	double x;
	std::cin >> x;
	std::cout << std::endl << "y = ";
	double y;
	std::cin >> y;
	std::cout << std::endl;
	if ( (x * x + y * y) <= 4.0 )
	{
		if ( ((-2.0 <= x <= -1.0) and (y <= 0.0)) or ((1.0 <= x <= 2.0) and (y <= 0.0)) or 
			( (-1.0<x<=0.0)and(y<=(2.0*x+2.0)) ) or ( (0.0<x<1.0)and(y<=(-2.0*x+2.0)) ) )
		{
			std::cout << "You're in the boat!!!" << std::endl;
		}
		else
		{
			std::cout << "You're not in the boat(((" << std::endl;
		}
	}
	else
	{
		std::cout << "You're not in the boat(((" << std::endl;
	}
}