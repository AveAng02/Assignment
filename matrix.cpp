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
	if(n == 2)
	{
		return a[0][0]*a[1][1] - a[0][1]*a[1][0];
	}
	else
	{
		int x = 
	}
}























