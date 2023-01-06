#include <iostream> 
#include <string> 
using namespace std;
int main() {
    string str1 = "Lol";
    string str2 = "Lmfao";
    cout << "Initial String size of str1:" << str1.size() <<endl;
    str1.resize(5,'z');
    cout << "String size after resize ():" << str1.size() <<endl;
    str2.resize(3,'o');
    cout << "String 2 size after resize():" << str2.size() <<endl;
    cout << "Elements of str1:" <<endl;
    for (int i = 0; i < str1.size(); ++i) { //loop to print the elements of str1
        cout << str1[i]<< endl;
    }
    cout << "Elements of str2:"<<endl;
    for (int z =0; z < str2.size(); ++z) { //loop to print the elements of str2
        cout << str2[z]<<endl;
    }
    return 0;
} 



