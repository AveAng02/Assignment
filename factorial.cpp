//Factioial of a number

#include <iostream>

int main()
{
	int i = 0, f = 1, n = 0; //Variables

	std::cout << "Enter a Integer: "	<< std::endl;
	Std::cin >> n;
	
	for(i = 1; i <= n; i++)
	{
		f = f * i;
	}
	
	std::cout << "The Factorial of " << n << "is: " << f;
}