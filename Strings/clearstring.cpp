#include <iostream> 
#include <string> 
using namespace std; 
int main() {
    string str1 = "Happy";
    cout << "Size of string before clear() function: " << str1.size()<<endl;
    str1.clear(); //clears the size of the string, and makes it 0
    cout << "Size of the string after clear() function: " << str1.size();
    return 0; 
}

