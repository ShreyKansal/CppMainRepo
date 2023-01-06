#include <iostream> 
#include <string> 
using namespace std;
int main() {
    string str = "abba";
    int l = 0; //initialise leftmost index position
    int r = str.size()-1; //initialise rightmost index position
    while (r>l) {
        if (str[l++] != str[r--]) { //comparing left and right index values from string
            cout << "String is not a palindrome" <<endl;
            return 0;         }
        }
        cout << "String is a palindrome" << endl;
    return 0;
}

//Complexity of the above program is O(n).