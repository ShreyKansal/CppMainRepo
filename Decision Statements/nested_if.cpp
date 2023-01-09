#include <iostream> 
using namespace std; 
int main() {
    int num;
    cout << "Enter the number:";
    cin >> num;
    if (num > 0) {
        if (num == 10) {
            cout << "The number is positive and is equal to 10";
        }
    }
    else if (num <= 0) {
        cout << "The number is negative or zero.";
    }
    else 
        cout << "The number is positive.";
return 0;
}