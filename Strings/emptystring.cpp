#include <iostream>
#include <string> 
using namespace std;
int main() {
    string str1 = "Transformers: Revenge of the Fallen";
    string str2;
    cout << "Boolean value for string to be present: "<< str1.empty() <<endl; //returns boolean value
    cout << "Boolean value for string to be present: "<< str2.empty() <<endl; //returns boolean value

    return 0;
    } 

// 0 means string is not empty, 1 means string is empty. 