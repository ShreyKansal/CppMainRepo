#include <iostream> 
using namespace std; 
void swap (int *, int *); //function_prototype
int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b; 
    cout << "Before swapping: " << "a:" << a <<" "<<  "b:" << b << endl;
    swap(&a, &b); //function call 
} 
void swap (int *c , int *d) 
{ 
    *d = (*c + *d) - (*c = *d);
    cout << "After swapping: " << "a:" << a <<" "<<  "b:" << b << endl;
}  