#include <iostream> 
using namespace std; 
int main() {
    double num, sum = 0;
    for (int i = 1; i<=10; i++) {
        cout << "Enter the number";  
        cin >> num; 
        if (num < 0) 
        break; //exits the loop if number less than zero. 
        if (num >= 500) 
        continue; //skips the number if its greator than equal to 500. 
        sum += num;
    }
    cout << "Sum: " << sum;
    return 0; 
} 

