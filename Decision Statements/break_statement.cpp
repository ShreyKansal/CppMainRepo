#include <iostream>
using namespace std;
int main() {
    double num, sum=0;
    for (int i=1;i<=10;i++) {
        cout << "Enter the number" << i;
        cin >> num;
        if(num < 0)
        break; //terimates the loop and pass onto next code block.
        sum += num;
    }
    cout << "Sum: " << sum;
    return 0; 
}

//The above program shows the use of break statement to exit out of a for loop. 