#include <iostream> 
using namespace std; 
int main() {
    int num, factorial = 1; 
    cout << "Enter your number: "<< endl;
    cin >> num; 
    for (int i = num; i > 1; i--) {
        factorial *= i;
    }
cout << "Factorial of the number:"<< factorial;
} 