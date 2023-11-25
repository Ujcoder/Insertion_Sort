using namespace std;
#include<iostream>

void InsertionSort(int a[], int n)
{
	int i, j, index;
	for (i = 1; i < n; i++)
	{
		index = a[i];
		j = i;
		while ((j > 0) && (a[j - 1] > index))
		{
			a[j] = a[j -1];
			j = j - 1;
		}  
		a[j] = index;
	}
}

int main()
{
	int i, n, a[20];
	cout << "Enter Size of Array : "; cin >> n;
	cout << "Enter elem in Array :" << endl;
	for (i = 0; i < n; i++)
		cin >> a[i];
	InsertionSort(a, n);
	cout << "After Sorting Elem  :" << endl;
	for (i = 0; i < n; i++)
		cout << a[i] << endl;
}