#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
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
	bubbleSort(arr, n);
	for (i = 0; i < n; i++){
		cout << arr[i] << " ";
		if(i%10==0)
			cout<<endl;
	}	
	return 0;
}
