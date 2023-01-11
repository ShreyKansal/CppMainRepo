//No arguments and no return value 
#include <iostream> 
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
