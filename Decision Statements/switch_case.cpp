#include <iostream> 
using namespace std;
int main () { 
char word;
cout << "Enter your character";
cin >> word;
switch (word) {
    case 'A': {cout << "Vowel Entered" <<endl;} break; 
    case 'I': {cout << "Vowel Entered" <<endl;} break;
    case 'E': {cout << "Vowel Entered" <<endl;} break;
    case 'O': {cout << "Vowel Entered" <<endl;} break;
    case 'U': {cout << "Vowel Entered" <<endl;} break;
    default : {cout << "Vowel not entered";};
}
return 0;
}

/*
switch (expression) {
case 1 : {code block_1;}
case 2 : {code block_2;}
.
.
case n : {code block_n;}
default : {code block_default;} 
}

*/
// If expression inside switch case is satisfied then it will print all the cases mentioned. 
// To print a specific case, we use break statement. 
// default case is optional, if no case is matched, then default is considered. 