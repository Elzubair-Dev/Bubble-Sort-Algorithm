# Bubble-Sort-Algorithm
Bubble Sort is one of the basic algorithms

#### Extra Explanation:

- The idea of this algorithm is based on the following:  
"Ascending order"  
- In the first pass, we start from the first item and compare it with the second item. If the second item is smaller than it, we swap, and if not, we don't.  
- We move on to compare the second and third items, and if it is smaller, we swap them, and if it is not, we don't, and so on until the last two items.  
- Automatically by the end of the first pass, the largest item will be in the last index.  
- In the second pass, we start again from the first item and compare it with the second item. If the second item is smaller than it, we swap, and if not, we don't.  
- We repeat the same steps again, but this time we stop with the penultimate item, because the last one we already know is the largest item in the list.  

## Code:

```
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
```

## Buy me a Coffee:
if you want to support me
(https://www.buymeacoffee.com/zu698air)

#### Don't forgit to give me a Star

## Done 
