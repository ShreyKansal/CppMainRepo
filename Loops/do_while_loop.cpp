//The below program adds numbers entered by the user until the user inputs 0. 
#include <iostream> 
using namespace std;
int main() {
    float num , sum = 0;
    do { // the code block under this will run irrespective of the condition for the first iteration. 
        cout << "Enter the number"; 
        cin >> num; 
        sum += num;
    } while (num != 0); //loop will be exited if this condition gets false. 
    cout << "Sum of the numbers:" << sum;
    return 0;
}

/*
do {
    code block;
while (condition);
}
*/ 

//In do-while loop, first code is executed, then condition is checked. 
