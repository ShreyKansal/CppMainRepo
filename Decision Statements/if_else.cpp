#include <iostream> 
using namespace std; 
int main() {
    int num; 
    cout << "Enter your number:" ; 
    cin >> num; 
    if (num>1 && num<=10) { //condition is checked in the if statement, if not true, then else part is printed. 
        cout << "The number is between 1 to 10";
    }
    else {  
        cout << "The number is out of range.";
    }
} 
/*
if (condition) {
    code block 1;
}
else {
    code block 2;
}
*/ 

