﻿#include <iostream>

using namespace std;

const int A = 100, B = 50;

void DisplayMatrix(int matrix[][B], int n, int m);

int main()
{
	int matrix[A][B] = { { 0 } };
	int  n, m;
	cout << "Enter n: ";
	cin >> n;
	m = n;
	for (int i = 0; i < n; i++)
	{
		{
			matrix[i][i] = n;
		}
		for (int j = 0; j < i; j++)
		{
			matrix[i][j] = n - i + j;
		}
	}
	DisplayMatrix(matrix, n, m);
	system("pause");
	return 0;
}

void DisplayMatrix(int matrix[][B], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			cout.width(); 
			cout << matrix[i][j];
		}
		cout << endl;
	}
}