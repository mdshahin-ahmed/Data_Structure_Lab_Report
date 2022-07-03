// Write a program to search an element in on array using binary search algorithm.

#include<iostream>

  using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  int myarr[10];
  int num;
  int output;

  cout << "Please enter 10 elements ASCENDING order" << endl; // like:  1 2 3 4 5 6 7 8 9 10
  for (int i = 1; i <= 10; i++) {
    cin >> myarr[i];
  }
  cout << "Please enter an element to search : " ;
  cin >> num;

  output = binarySearch(myarr, 1, 10, num);

  if (output == -1) {
    cout << "No Match Found";
  } else {
    cout << "Match found at position : " << output ;    
  }

  return 0;
}