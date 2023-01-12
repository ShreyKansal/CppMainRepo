//No arguments no return type

/*#include <iostream> 
using namespace std; 
void fact(); //function_prototype
main() //function_call
{
    fact();
}
void fact() //function_definition 
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int factorial = 1;
    while (num>0)
    {
        factorial = factorial*num;
        num--;
    }
    cout << "The factorial of the number: "<< factorial;
return;
} 
*/ 

//With both arguments and return type
/* #include <iostream> 
using namespace std; 
int fact (int num, int factorial) { 
    while (num > 0) {
        factorial = factorial * num; 
        num--;
    }  
    return factorial; 
} 
int main() {
   int n;
   cin >>"Enter the number: "<< n;
   cout << fact(n, 1); 
   return 0; 
}
*/

//With no arguments and return type
/*
#include <iostream> 
using namespace std; 
int fact(); //function_prototype
int main() {
   cout << fact(); 
   return 0; 
} 
int fact() { 
    int num, factorial = 1;
    cout << "Enter the number: ";
    cin >> num; 
    while (num > 0) {
        factorial = factorial * num; 
        num--;
    }  
    return factorial; 
} 
*/

//With arguments and no return type 
#include <iostream> 
using namespace std; 
void fact(int num, int factorial);
int main() {
    int n; 
    cout << "Enter the number: ";
    cin >> n; 
    int f = 1;
    fact(n,f);
    return 0;
}
void fact(int num, int factorial) {
    while (num > 0) {
        factorial = factorial * num; 
        num--;
    }
    cout << factorial;
    return;
}

