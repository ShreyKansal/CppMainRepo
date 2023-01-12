#include <iostream> 
using namespace std; 
void scope () {
    int a = 5; 
    cout << "a:" << a; //valid as it is declared within the function. 
    return;
} 

int main() {
    // cout << "a:" << a; //not valid function not declared in scope. 
    scope();
    return 0;
}

