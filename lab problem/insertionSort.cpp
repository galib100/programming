#include <stdlib.h>
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

//member functions declaration
void insertionSort(int arr[], int length);
void printArray(int array[], int size);

// main function
int main()
{
    clock_t time_req;
    time_req = clock();
//	int array[6] = {5, 1, 6, 2, 4, 3};
		int array[6] = {500, 100, 600, 200, 400, 300};

	// calling insertion sort function to sort the array
	insertionSort(array, 6);

time_req = clock() - time_req;
     cout<<"time difference: "<< (float)time_req/CLOCKS_PER_SEC<<endl;

	return 0;
}

void insertionSort(int arr[], int length)
{
	int i, j, key;
	for (i = 1; i < length; i++)
	{
		j = i;
 		while (j > 0 && arr[j - 1] > arr[j])
 		{
 			key = arr[j];
 			arr[j] = arr[j - 1];
 			arr[j - 1] = key;
 			j--;
 		}
	}
	cout << "Sorted Array: ";
	// print the sorted array
	printArray(arr, length);
}

// function to print the given array
void printArray(int array[], int size)
{
 	int j;
	for (j = 0; j < size; j++)
	{
 		cout <<" "<< array[j];
 	}
 	cout << endl;
}
