#include <iostream> 
using namespace std; 
int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;
    if (num==0) {
        cout << "The number is zero";
    }
    else if (num > 0) {
        cout << "The number is postive";
    }
        else {
            cout << "The number is negative"; 
        }
    return 0;
}

/*
if (condition) {
    code block_1;
}
else if (condition) {
    code block_2;
}
else {
    code block_3;
}
*/

//The above program identifies the number as negative, positive or zero. 