/*
#include <iostream> 
using namespace std; 
int add() { //function defining 
int x =2, y = 3; //defining variables, NOTE; we can also define variables inside function [int add(int x, int y)].
return x+y; 
}
int main() {
cout << add(); 
}
*/

// Defining variables inside the function parenthsis LINE 16
/* #include <iostream> 
using namespace std; 
int add(int x, int y) { //function defining with variables
return x+y; 
}
int main() {
cout << add(2,3); //Entering values while calling functions. 
} 
*/

//Adding two number entered by user using functions. 
/* #include <iostream> 
using namespace std; 
int add () {
    int x ,y; 
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Sum of the two numbers:"; 
    return (x+y);
}
int main () { 
    cout << add();
    return 0;
    }  
    */

//Similary, we can make multiple functions and call them inside the main function. 

#include <iostream> 
using namespace std; 
int add () {
    int x ,y; 
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y; 
    cout << "Sum of the two numbers:"; 
    return (x+y);
}
int sub() {
    int x, y; 
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Subtraction of the two numbers:"; 
    return(x-y);
}
int mul() {
    int x, y; 
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Multiplication of the two numbers:"; 
    return(x*y);
}
int div() {
    int x, y; 
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Sum of the two numbers:"; 
    return(x/y);
}
int main () { 
    cout << add()<<endl;
    cout << sub()<<endl;
    cout << mul()<<endl;
    cout << div();
    return 0;
    } 




