// Write a program to search sort elements in an array using quick sort algorithm.

#include <iostream>
using namespace std;

void swap(int arr[] , int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while( i <= high){
		if(arr[i] > pivot){
			i++;
		}
		else{
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

void quickSort(int arr[], int low, int high){
	if(low < high){
	int pivot = arr[high];
	int pos = partition(arr, low, high, pivot);
	
	quickSort(arr, low, pos-1);
	quickSort(arr, pos+1, high);
	}
}

int main()
{
	int n ;
	cout << "Enter the size of Array : ";
	cin>>n;
    cout << "Please enter " << n << " number : ";   // Like: 5 9 15 42 85
	int arr[n];
	for( int i = 0 ; i < n; i++){
		cin>> arr[i];
	}
	quickSort(arr, 0 , n-1);
	cout<<"The sorted array is: ";
	for( int i = 0 ; i < n; i++){
		cout<< arr[i]<<" ";
	}
	
}