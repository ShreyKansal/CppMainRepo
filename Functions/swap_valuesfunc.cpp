//call by value
#include <iostream> 
using namespace std; 
void swap (int a , int b); //function_prototype
int main() { 
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Before swapping: " << "a:" << a <<" "<<  "b:" << b << endl;
    swap (a,b); //function_call
    return 0 ;
    } 
void swap (int a, int b) { //function_definition
    b = (a+b)-(a=b); 
    // if a = 4 and b =7 before swapping then, after swapping a=7 and b=(11)-7=4 
    cout << "After swapping: " << "a:" << a << " " << "b:" << b;
    return; 
}  