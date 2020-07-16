//Palindrome check using String

#include <iostream>
#include <string>

#define TRUE 1
#define FALSE 0

int palin(string, int, int);

int main()
{
	string st = "";
	
	std::cout << "Enter a word: ";
	std::cin >> st;
	
	if(palin(st, 0, st.length() - 1) == TRUE)
	{
		std::cout << "Sting is Palindome." << std::endl;
	}
	else
	{
		std::cout << "String is not Palindrome." << std::endl;
	}
}

int palin(sting g, int a, int b)
{
	if(a <= g.length())
	{
		if(g[a] == g[b] && palin(g, a + 1, b - 1) == TRUE)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
	else
	{
		return TRUE;
	}
}