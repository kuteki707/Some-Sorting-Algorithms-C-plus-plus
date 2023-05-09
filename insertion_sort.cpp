#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
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

	insertionSort(arr, n);
	for (i = 0; i < n; i++){
		cout << arr[i] << " ";
		if(i%10==0)
			cout<<endl;
	}

	return 0;
}
