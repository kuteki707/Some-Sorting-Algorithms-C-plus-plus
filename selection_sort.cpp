#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		{
		if (arr[j] < arr[min_idx])
			min_idx = j;
		}
		if (min_idx!=i)
			swap(&arr[min_idx], &arr[i]);
	}
}

int main()
{

    ifstream fin ("list.txt");
	int n;
	fin>>n;
	
	int arr[n+1],i;

	for(i=0;i<n;i++){
		fin>>arr[i];
	}
    fin.close();
	selectionSort(arr, n);
	for (i = 0; i < n; i++){
		cout << arr[i] << " ";
		if(i%10==0)
			cout<<endl;
	}	
	return 0;
}
