#include <iostream> 
#include <string>
using namespace std;
int main() {
    string str1 = "Hi!";
    string str2 = "What's Up?";
    string final_string = str1 + "" + str2;
    string final_string2;
    cout << "Final Concatenated String is: "<< final_string <<endl;

    // We can do the same thing by using the append function. 
    final_string2 = str1.append(str2);
    cout << "Using append function: "<< final_string2; //In append() function, the space ("") is already added.
    return 0;
}