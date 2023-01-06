#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
    string str1 = "Compa";
    string str2 = "Compare";
    if (str1.compare(str2)==0) { //compare() function
    cout << "str1 is equal to str2"<<endl; 
    }
    else {
        cout << "str1 is not equal to str2"<<endl;
    }
    return 0;
}

