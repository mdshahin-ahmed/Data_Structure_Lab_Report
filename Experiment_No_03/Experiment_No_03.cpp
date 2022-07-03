// Write a program to search an element in an array using linear search algorithm.

#include <iostream>
using namespace std;
   
int main(){
    int input[100], count, i, num;
       
    cout << "Enter Number of Elements in Array (max. 100): ";
    cin >> count;
     
    cout << "Please enter " << count << " number ASCENDING order : ";   // Like: 5 9 15 42 85
      
    // Read array elements
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
      
    cout << "Enter a number to serach in Array : ";
    cin >> num;
      
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < count; i++){
        if(input[i] == num){
            cout << "Element found at index " << i + 1;
            break;
        }
    }
      
    if(i == count){
        cout  << "Element Not Present in Input Array\n";
    }
 
    return 0;
}