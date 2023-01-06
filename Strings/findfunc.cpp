#include <iostream> 
#include <string>
using namespace std;
int main() {
    string str1 = "Let's play hide and seek!";
    cout << str1.find("hide")<<endl; //returns out the index position from where we start searching the word 
    cout << str1.find("hide",15); //returns out the garbage value 
}

//if the index of the word we wish to search is less than index position we are searching, then find() function returns out the garbage value. 