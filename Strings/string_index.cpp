#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
    string str = "Clown" ;
    for (int i = 0; i< str.size();i++) { //loop to print the elements of the string
        cout << str[i]<<endl; 
    }
    return 0; 
}