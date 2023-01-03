#include <iostream>
#include <string>
using namespace std;
int main() { 
    //integer value 
    int num1 = 2;                //2 to 4 bytes
    double num2 = 500.78;        //8 bytes
    float num3 = 5.99;           //4 bytes

    //character value 
    char name = 'S';             //1 byte
    
    //string value - Note: For this, we need to add the <string> header file in our program 
    string text = "Hello";       //No fixed size, as the size depends on number of characters

    //boolean value
    bool sahibaathai = true;    //1 byte
}