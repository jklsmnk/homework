#include <iostream>

using namespace std;

const int N = 100;

void ChoiceSort(int a[], int n);
void RandomArray(int[], int);
void DisplayArray(int[], int);
void Swap(int&, int&);

int main()
{
	const int N = 100;
	int arr[N] = { 0 };
	int n = 20;
	while (true)
	{
		cout << "Enter n > 0 and n <= N: ";
		cin >> n;
		if (n > 0 && n < 100) break;
		else
			cout << "Input error! Please,try again!" << endl;
	}
	RandomArray(arr, n);
	DisplayArray(arr, n);
	ChoiceSort(arr, n);
	cout << endl;
	DisplayArray(arr, n);
	system("pause");
	return 0;
}

void ChoiceSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] > a[min]) min = j;
		}
		Swap(a[i], a[min]);
	}
}

void RandomArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100 - 50;
	}
}

void DisplayArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}