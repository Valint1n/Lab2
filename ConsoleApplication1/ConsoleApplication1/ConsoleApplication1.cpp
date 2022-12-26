
#include <iostream>
using namespace std;
int main()
{
	int x = 5;
	int y = x >> 1;
	int z = x << 1;

	std::cout << y << "\n";
	std::cout << z << "\n";


	x = 5 & 3;

	std::cout << "5 & 3 = " << x << "\n";

	std::cout << "5 | 3 = " << (5 | 3) << "\n";

	std::cout << "5 | 3 = " << (5 ^ 3) << "\n";

	std::cout << "~5 " << (~5) << "\n";

}
