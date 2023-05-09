#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i
		= (low
		- 1); 

	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++; 
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{
	fstream fin ("list.txt");
	int n;
	fin>>n;
	
	int arr[n+1],i;

	for(i=0;i<n;i++){
		fin>>arr[i];
	}
    fin.close();

	quickSort(arr, 0, n - 1);
	for (i = 0; i < n; i++){
		cout << arr[i] << " ";
		if(i%10==0)
			cout<<endl;
	}
	return 0;
}
