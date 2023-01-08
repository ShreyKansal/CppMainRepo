#include <iostream> 
#include <array> 
using namespace std; 
int main() {
    int arr[5] = {1,20, 50, 60, 7}; //array initialisation and declaration
    cout << "Elements of the array:" ;
    for (int i : arr) {  //this loop will iterate each index of the array and store the value in i. 
        cout << i <<" ";
    }
    return 0;
    }
/*
for (type var : array/vector)

Although alternatively, we can also use for loop instead of for_each loop for printing elements of the array. 
#include <iostream> 
using namespace std; 
int main() {
    int arr[5] = {1, 2, 15, 7, 9}; 
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0 ; i < length; i++) 
    cout << "Elements of the array:" << arr[i] <<endl; 
}
*/
