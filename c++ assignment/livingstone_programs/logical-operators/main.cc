#include <iostream>

using namespace std;

int main(){
    int a =10,b = 2;
    int c= 20 ,d =10,e =2 ;

    /* the logical operators contain the following &&, || , ! */
    if((c > d) && (d < e) )
    cout << "the value of c is greater than d  AND d is less than e" << endl;
    else
    cout <<  "the value of c is greater than d  AND d is less than e, but statement is not correct" << endl;
    if((d > e) || (a < d))
    cout << "the value of d is greater than e  or a is less than d " << endl;
    else
    cout << "the value of d is less than e " << endl;
   if(!(a ==b))
   cout << "the value of a a is equal to be in logical sense" <<endl;

    return 0;
   
}