#include <iostream>
#include <cmath>

#define TRUE 1
#define FALSE 0

int primeCheck(int);

int main()
{
	int m, n;
	
	std::cout << "Enter a Range\n Start:";
	std::cin >> m;
	std::cout << " End:";
	std::cin >> n;
	
	
	
	std::cout << "The Primes are:" << std::endl;
	for(int i = std::min(m, n); i < std::max(m, n); i++)
	{
		if(primeCheck(i) == TRUE)
		{
			std::cout << i << std::endl;
		}
	}
}

int primeCheck(int k)
{
	/*
	* This snippet checks for negative integers, 0 or 1 
	* As none of these are prime numbers a warning statement is printed.
	*/
	if(k <= 1)
	{
	    std::cout << "Invalid Input" << std::endl;
	    return FALSE;
	}
	
	/*
	* Any integer that does not have a factor which is 
	* less than square root of itself is bound to be a prime.
	*/
	for(int i = 2; i <= sqrt(k); i++)
	{
		if(k % i == 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}