//Palindrome check using String

#include <iostream>

#define TRUE 1
#define FALSE 0

int palin(int low, int high, std::string str)
{
	if(low >= high)
	{
        return TRUE;
	}
		
	if(str[low] == str[high] && palin(low + 1, high - 1, str) == TRUE)
	{
	    return TRUE;
	}
}

int main()
{
    std::string st;
	
	std::cout << "Enter a word: ";
	std::getline(std::cin, st);
	
	if(palin(0, st.length() - 1, st) == TRUE)
	{
		std::cout << "Sting is Palindome." << std::endl;
	}
	else
	{
		std::cout << "String is not Palindrome." << std::endl;
	}
}

