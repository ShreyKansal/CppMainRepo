#include <iostream>
#include <string> 
using namespace std;
int main() {
    string str = "Four Lines";
    int length;
    cout << "Length of string: "<< str.length() <<endl; //Prints the number of character in a string. 
    cout << "Size of the string: " << str.size(); //This also prints the number of character in a string. 
    return 0;
}

/*
Note: Space is also counted in length. 
We can also print the length of the string by using for loop. 
*/