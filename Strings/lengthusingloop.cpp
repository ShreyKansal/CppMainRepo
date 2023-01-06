#include <iostream> 
#include <string> 
using namespace std; 
int main () {
    string str = "Lost World"; 
    int count = 0;
    for (int i=0;str[i] != '\0';i++) { // The idea was to increment the count variable until we don't find the null character '\0'
        count++;
    }
    cout << "Length of the string: " << count; 
    return 0;
} 