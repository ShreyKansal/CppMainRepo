#include <iostream> 
using namespace std;
int main () {
    int x = 10, y=5, z=2, u=9, c=6, b=5, a=12, d=4, s= 10, t=8;
    x += 5; //x = x+5
    y -= 3; //x = x-3
    z *= 4; //x = x*4
    u /= 2; //x = x/2
    c %= 3; //x = x%3
    b |= 2; //x = x|2
    a &= 7; //x = x&7
    d ^= 2; //x = x^2
    s <<= 1; //x = x<<1
    t >>= 2; //x = x<<2
    cout << x <<endl;
    cout << y <<endl;
    cout << z <<endl;
    cout << u <<endl;
    cout << c <<endl;
    cout << b <<endl;
    cout << a <<endl;
    cout << d <<endl;
    cout << s <<endl;
    cout << t;
}