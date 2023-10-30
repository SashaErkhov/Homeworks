#include <iostream>
#include <cstring>
#include <cmath>
//#define Debug

int from16to10(int input)
{
    int output = 0;
    for (int i = 0; i != 3; ++i)
    {
        output += pow(16, i) * (input % 16);
        input /= 16;
    }
    return output;
}

std::string from10to2(int input)
{
    std::string output = "";
    while (input != 0)
    {
        output = char((input % 2)+48) + output;
        input /= 2;
    }
    return output;
}

#ifdef Debug
void tester()
{
    std::cout << "0x123: " << from16to10(0x123) << std::endl;
    std::cout << "0x12A: " << from16to10(0x12A) << std::endl;
    std::cout << "0xABC: " << from16to10(0xABC) << std::endl;
    std::cout << "0xFFF: " << from16to10(0xFFF) << std::endl;
    std::cout << "0x000: " << from16to10(0x0) << std::endl;
    std::cout << "0x001: " << from16to10(0x1) << std::endl;
    std::cout << "0 = " << from10to2(0) << std::endl;
    std::cout << "1 = " << from10to2(1) << std::endl;
    std::cout << "64 = " << from10to2(64) << std::endl;
    std::cout << "128 = " << from10to2(128) << std::endl;
    std::cout << "999 = " << from10to2(999) << std::endl;
}
#endif//Debug



int main()//BAD
{
#ifdef Debug
    tester();
#endif//Debug
    int number;
    std::cin >> number;
    std::cout << from16to10(number) << std::endl;
    std::cout << from10to2(from16to10(number)) << std::endl;
    return 0;
}