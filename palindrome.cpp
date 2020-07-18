//Checking fo palindrome

#include <iostream>

int revesi(int);

int main()
{
	int n = 0;
	
	std::cout << "Enter a number:";
	std::cin >> n;
	
	if(n == revesi(n))
	{
		std::cout << "Number is Palindrome";
	}
	else
	{
		std::cout << "Number is not Palindrome";
	}
}

int revesi(int i)
{
	int r = 0;
	
	while(i != 0)
	{
		r = (r * 10) + (i % 10);
		i = i / 10;
	}
	
	return r;
}