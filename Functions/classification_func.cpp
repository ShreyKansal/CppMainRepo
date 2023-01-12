//No arguments and no return value 
/* #include <iostream> 
using namespace std; 
void prime(); //no arguments
int main() {
    prime();
    return 0; //return type void so no value returned. 
}
void prime()
{ 
int num, i, flag = 0;
cout << "Enter a number: ";
cin >> num; 
for(i = 2; i <= num/2; ++i) {
if (num % i == 0) {
flag = 1;
break;
}
}
if (flag == 1) {
    cout << num << " " << "is not a prime number";
}
else
cout << num << " " << "is a prime number";
}  
*/

// No arguments passed but a return value 
/*
#include <iostream> 
using namespace std; 
int prime (); //function_prototype
int main() {
    int num, i, flag = 0; 
    num = prime(); //function_call 
    for (i = 2; i <= num/2; ++i) {
        if (num%i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        cout << num << " " <<"is not a prime number";
    }
    else
        cout << num << " " << "is a prime number"; 
        return 0; 
} 
int prime() { //function_definition 
int n;
cout << "Enter a positive integer to check:";
cin >> n;
return n; 
} */

//Arguments passed but no return value 
/* #include <iostream> 
using namespace std; 
void prime (int n); 
int main() {
    int num; 
    cout << "Enter a positive integer to check: ";
    cin >> num;
    prime(num); //function_call with Arguments
    return 0;
} 
void prime (int n) //function_definition 
{
    int i, flag = 0;
    for (i = 2; i <= n/2; ++i) {
        if (n%i == 0) {
            flag = 1; 
            break; 
        }
    }
    if (flag == 1) {
        cout << n << " " << "is not a prime number";
    }
    else {
        cout << n << " " << "is a prime number";
    }
} */

//Arguments passed and a return value 

#include <iostream> 
using namespace std; 
int prime (int num); //function_declaration
int main() {
    int num, flag = 0; 
    cout << "Enter positive integer: ";
    cin >> num;
    flag = prime(num);
    if (flag == 1) {
    cout << num << " " << "is not a prime number";
    }
    else {
        cout << num << " " << "is a prime number";
        return 0;
    } 
}
    int prime (int num) { //function_defination 
        int i; 
        for (i=2; i <= num/2; ++i) {
            if (num % i ==0) 
            return 1; 
        } 
        return 0;
}