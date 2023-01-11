#include <iostream> 
using namespace std; 
int max (int x, int y) {
    if (x>y) 
    return x;
    if (y>x) 
    return y;
}
int main() {
    cout << "Max of the two numbers: " << max(2,4);
}