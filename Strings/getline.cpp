#include <iostream> 
using namespace std;
int main() {
    string cartoon;
    string channel;
    cout << "Enter your favourite character name:"<<endl;
   /*cin >> cartoon;
    cout << cartoon;
    return 0; 
} */

/* Input: Tinker Bell 
Output: Tinker 
To avoid this, we use getline() function. 
*/ 
 getline (cin, cartoon); // without delimiter 
 getline (cin, channel, '$'); //Because of this '$', no output will be printed, once '$' is pressed in terminal out will be printed.
 cout << cartoon <<endl;
 cout << channel;
 return 0;
}
