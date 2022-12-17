#include <iostream>

using namespace std;

int main(){
    double  a;
     int b, c;
    double d,e,f,g,h,j;
    cout << "Enter you first value in this order a , b , c"<< endl;
    cin >> a >>  b >> c;
    d = a + b + c;
    e = c - a - b;
    f = a * b * c;
    g = c / a ;
    j = c % b;
    h = c / (a * b) - (b / a); 
    cout << "the sum of all the number is " << d << endl;
    cout << "the substration of all the number is " << e  << endl;
    cout << "the product of all the number is " << f  << endl;
    cout << "the division of all the number is " << g  << endl;
    cout << "the modulus of all the number is " << j << endl;
    cout << "the calculation using all different operator is " << h << endl;
   
   return 0;
}