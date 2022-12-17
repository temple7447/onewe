#include <iostream>

using namespace std;

int main(){
    int a,b;
        /* the bitwise operators contain the following &, |, ^, ~ , <<, >> */
    cout << "Enter a value in this order a b" << endl;
    cin >> a >> b;
    cout << "a & b   " << (a & b) << endl;
    cout << "a | b   " << (a | b ) << endl;
    cout << "a ^ b  " << (a ^ b ) << endl;
    cout << "~a " << ( ~b ) << endl;
    cout << "a << 2   " << (a << 3 ) << endl;
    cout << "b << 2   " << (b << 2 ) << endl;
    cout << "b >> 2   " << (b >> 3 ) << endl;
    cout << "a >> 2   " << (a >> 2 ) << endl;
    

    return 0;
   
}