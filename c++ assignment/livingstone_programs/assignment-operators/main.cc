#include <iostream>

using namespace std;

int main(){
    int a =10,b = 2;
    int c= 20 ,d =10,e =2 ;

    /* the assignment operators contain the following = , += , !=, == , *= , -= , /=, %= */
  if (a != b)
    cout << "the is value of a is not equal to b" << endl;
    else
    cout << "the value of a  equal to be"<<endl ;
    a +=b; // the value of a has being increase by b
    cout << a << endl;
    b *= c; // the value of b has being mutiply by c
    cout << b << endl;
    c -=d; //the value of d has being remove for c
    cout << c << endl;
    d /=e; // the value of d was divided by e
    cout << d << endl;


  

    return 0;
   
}