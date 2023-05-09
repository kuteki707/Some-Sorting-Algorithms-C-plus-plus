#include <iostream>
#include <fstream>
using namespace std;

void heapify(int arr[], int N, int i)
{

	int largest = i;

	int l = 2 * i + 1;

	int r = 2 * i + 2;

	if (l < N && arr[l] > arr[largest])
		largest = l;

	if (r < N && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, N, largest);
	}
}

void heapSort(int arr[], int N)
{

	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);

	for (int i = N - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
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

	heapSort(arr, n);

	for (i = 0; i < n; i++){
		cout << arr[i] << " ";
		if(i%10==0)
			cout<<endl;
	}
	return 0;
}
