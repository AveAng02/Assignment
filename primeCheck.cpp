//Prime check.

#include <iostream>
#include <math>

#define TRUE 1
#define FALSE 0

int primeCheck(int[], int);

int main()
{
	int n;
	
	std::cout << "How many numbers are supposed to be entered?" << std::endl;
	std::cin >> n;
	
	int arr[n];
	
	std::cout << "Enter the Primes:" << std::endl;
	for(int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	
	std::cout << "The Primes are:" << std::endl;
	for(int i = 0; i < n; i++)
	{
		if(primeCheck(arr[i]) == TRUE)
		{
			std::cout << arr[i] << std::endl;
		}
	}
}

int primeCheck(int k)
{
	/*
	* Any integer that does not have a factor which is 
	* less than square root of itself is bound to be a prime.
	*/
	for(int i = 2; i < sqrt(k); i++)
	{
		if(k % i == 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}