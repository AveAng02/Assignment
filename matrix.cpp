//Matrix multiplication, division and determinant.

#include <iosteam>

void add(int* a, int* b, int* x, int n);
void multiply(int* a, int* b, int* x, int n);
int determinant(int* a, int n);

void add(int* a, int* b, int* x, int n)
{
	for(int j, i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			x[i][j] = a[i][j] + b[i][j];
		}
	}
}

void multiply(int* a, int* b, int* c, int n)
{
	for(int j, k, i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			for(k = 0; k < n; k++)
			{
				x[i][j] = x[i][j] + a[j][k]*b[k][j];
			}
		}
	}
}

int determinant(int* a, int n)
{
	int sum = 0;
	
	if(n == 2)
	{
		return a[0][0]*a[1][1] - a[0][1]*a[1][0];
	}
	else
	{
		int x[n - 1][n - 1];
		
		for(int k = 0; k < n; k++)
		{
			for(int j,i = 0; i < n - 1; i++)
			{
				for(j = 0; j < n - 1 && j != k; j++)
				{
					x[i][j] = a[i + 1][j];
				}
				
				for(j = k + 1; j < n - 1; j++)
				{
					x[i][j] = a[i + 1][j - 1];
				}
			}
				
			sum = sum + a[0][k]*determinant(x, n - 1);
		}
	}
}

int main()
{
	int n = 0;
	char choice;
	
	std::cout << "What is the size of the array:" << std::endl;
	std::cin >> n;
	
	int a[n][n], b[n][n], x[n][n];
	
	std::cout << "Enter the choice:" << std::endl;
	std::cout << " A for Addition \n M for Multiplication \n D for Determinant" << std::endl;
	std::cin >> choice;
	
	switch(choice)
	{
		//Addition
		case A:
		
			//Input and output of first array.
			std::cout << "Enter the first array:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				std::cout << i << "Column:" << std::endl;
				
				for(j = 0; j < n; j++)
				{
					std::cin >> a[j][i];
				}
			}
			
			std::cout << "The array is:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
				{
					std::cout << a[i][j];
				}
				
				std::cout << "\n";
			}
			
			//Input and output of second array.
			std::cout << "Enter the sceond array:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				std::cout << i << "Column:" << std::endl;
				
				for(j = 0; j < n; j++)
				{
					std::cin >> b[j][i];
				}
			}
			
			std::cout << "The array is:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
				{
					std::cout << b[i][j];
				}
				
				std::cout << "\n";
			}
			
			//Function call for addition.
			add(a, b, x, n);
			
			//Printing statements.
			std::cout << "The resultant is:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
				{
					std::cout << x[i][j];
				}
				
				std::cout << "\n";
			}
			break;
		
		//Multiplication
		case M:
		
			//Input and output of first array.
			std::cout << "Enter the first array:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				std::cout << i << "Column:" << std::endl;
				
				for(j = 0; j < n; j++)
				{
					std::cin >> a[j][i];
				}
			}
			
			std::cout << "The array is:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
				{
					std::cout << a[i][j];
				}
				
				std::cout << "\n";
			}
			
			//Input and output of second array.
			std::cout << "Enter the sceond array:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				std::cout << i << "Column:" << std::endl;
				
				for(j = 0; j < n; j++)
				{
					std::cin >> b[j][i];
				}
			}
			
			std::cout << "The array is:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
				{
					std::cout << b[i][j];
				}
				
				std::cout << "\n";
			}
			
			//Function call for multiplication.
			multiply(a, b, x, n);
			
			//Resultant printing statement.
			std::cout << "The resultant is:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
				{
					std::cout << x[i][j];
				}
				
				std::cout << "\n";
			}
			break;
		
		//Determinant
		case D:
		
			//Input and output of array.
			std::cout << "Enter the array:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				std::cout << i << "Column:" << std::endl;
				
				for(j = 0; j < n; j++)
				{
					std::cin >> a[j][i];
				}
			}
			
			std::cout << "The array is:" << std::endl;
			
			for(int j,i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
				{
					std::cout << a[i][j];
				}
				
				std::cout << "\n";
			}
			
			std::cout << "Determinant is:" << Determinant(a, n) << std::endl;
		
			break;
		
		default()
			std::cout << "WRONG INPUT!!" << std::endl;
	}
}





















