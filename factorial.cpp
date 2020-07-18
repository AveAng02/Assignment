#include <iostream>

int fact(int);

int main()
{
	int n = 0;

	std::cout << "Enter a Integer: "	<< std::endl;
	std::cin >> n;
	
	std::cout << "The Factorial of " << n << "is: " << fact(n);
}

int fact(int n)
{
    int i = 1, f = 1;
    
    for(i = 1; i <= n; i++)
	{
		f = f * i;
	}
	
	return f;
}