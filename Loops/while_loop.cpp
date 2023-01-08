// While loop 
#include <iostream> 
using namespace std; 
int main() {
    int i;
    cout << "Enter your number";
    cin >> i; 
    while (i<=30) { //while loop executes the code block until the condition is true. 
        cout << i <<endl;
        i++;
    }
    return 0;
}

/*while (condition) {
    code block;
}*/