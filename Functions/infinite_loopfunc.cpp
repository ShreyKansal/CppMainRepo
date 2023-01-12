#include <iostream> 
using namespace std; 
void loop(); //function_prototype
int main() {
    loop(); //function_call
}
void loop() { //function_definition
    cout << "Till infinity";
    loop(); //calls itself
}

/*
The above program shows how we can take recursive calls using functions.  
We call the function in main(), which then directs to loop(). 
Execution remains in the function and calls itself again and again. 

*/ 

