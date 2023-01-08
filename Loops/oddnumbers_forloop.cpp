#include <iostream> 
using namespace std; 
int main() {
    int num; 
    cout << "Enter your number: ";
    cin >> num; 
    for (int i = 1; i<=num; i++) { 
        if (i%2 == 1) { //number when divided by 2 gives remainder 1 considered as odd. 
            cout <<  i<< endl;
        }
    }
}

//The above program prints 