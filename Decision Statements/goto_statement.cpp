#include <iostream> 
using namespace std; 
int main() {
    int num; 
    cout << "Enter your number:";
    cin >> num;
    goto label;
    for (int i=1; i < num; i++) {
        cout << i <<endl;
    }
    label:
    cout << "Only execute after label" <<endl; 
}

/* 
goto label_name; 
.
.
label: {
    code_block;
}

*/

//code after label will only be executed.
//the compiler will directly jump to line after label and starts executing.
