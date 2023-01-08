#include <iostream> 
using namespace std; 
int main() {
    int num;
    int factorial = 1; 
    cin >> num;
    while (num>0) {
        factorial = factorial*num; 
        num--; 
    }
    cout << "Factorial of the number: "<< factorial;
    return 0;
}