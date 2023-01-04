#include <iostream> 
using namespace std;
int main() {
    int x = 7;
    cout << (x<5 && x<3) <<endl; //Logical AND returns True only when both condition are True
    cout << (x<5 || x<2) <<endl; //Logical OR returns True when any of the condition is True
    cout << !(x<5 && x<1); //Logical NOT returns True when none of the condition is True
    return 0;
}