#include <iostream> 
using namespace std; 
int main() { 
    int num; 
    cout << "Enter your number: "<< endl;
    cin >> num;
    for (int i = 1; i <= num; i++) {  
        cout << i << endl; 
    }
}

/*
for (initialising var, condition, increment or decrement) {
    code block;
}
*/

//The above program prints the natural numbers till the input number. 