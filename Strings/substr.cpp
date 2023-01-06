#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
    string str1 = "Icecream";
    string str2 = str1.substr(0,3); //the last undex value in range will be excluded i.e 
    cout << str2;
}

/* 
If the start is positive and greater than, or equal, to the length of the string, substr() returns an empty string.
If the start is negative, substr() uses it as a character index from the end of the string.
If the start is negative or larger than the length of the string, the start is set to 0 
*/