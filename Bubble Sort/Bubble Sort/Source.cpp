using namespace std;
#include<iostream>
#include<algorithm>				//0    1  2  3  4  5
void B_Sort(int arr[], int size)//60,20,50,30,90,100
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void print(int arr[], int size)
{
	cout<<"[ ";
	for (int x = 0; x < size; x++)
	{
		cout << arr[x] << " ";
	}
	cout << "]\n";
}
int main()
{
	int w[] = { 100,60,20,50,30,90 };
	int n = sizeof(w) / sizeof(w[0]);
	print(w, n);
	cout << "---------------------after sorting -------------------\n";
	B_Sort(w, n);
	print(w, n);
}