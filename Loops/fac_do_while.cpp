#include <iostream> 
using namespace std;
int main() { 
int num, factorial=1; 
cout << "Enter your number:"<<endl;
cin >> num;
do {
    factorial = factorial*num;
    num--;
} while (num>1); { 
//condition is that number can't be zero or negative, the loop will run until 'num' becomes negative.
    cout << "Factorial of the entered number:"<< factorial; 
}
return 0;
}

//The above program shows how we can print factorial of a number using do-while loop. 