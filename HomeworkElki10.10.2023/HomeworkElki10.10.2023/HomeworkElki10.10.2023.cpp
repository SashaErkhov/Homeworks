#include <iostream>

void fooSpaceOut(int count)
{
	for (int i = 0;i < count;++i)
	{
		std::cout << ' ';
	}
}
void fooStarOut(int count)
{
	for (int i = 0;i < count;++i)
	{
		std::cout << '*';
	}
}

int main()
{
	std::cout << "Input count elok: ";
	int countEli;
	std::cin >> countEli;
	std::cout << "Input underground: ";
	int underground;
	std::cin >> underground;
	int now = 1;
	int space = underground / 2;
	int lavel = 7;
	int count = 0;
	while (now <= underground)
	{
		for (int i = 0;i < (countEli - 1);++i)
		{
			fooSpaceOut(space);
			fooStarOut(now);
			fooSpaceOut(underground + 5 - count);
		}
		fooSpaceOut(space);
		fooStarOut(now);
		++count;
		++now;
		++now;
		--space;
		std::cout << std::endl;
		if (lavel == now)
		{
			now = 1;
			lavel += 4;
			space = underground / 2;
			count = 0;
		}
	}
	return 0;//I'm win!
}