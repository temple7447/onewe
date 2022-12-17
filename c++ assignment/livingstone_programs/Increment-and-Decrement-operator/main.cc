#include <iostream>

using namespace std;

int main(){
int countup = 10, countdown = 30, result_a, result_b, result_c,result_d;
int secondcountup = 15, secondcountdown = 45;

// incrementing the value of the countup using the post increment
result_a = countup++;
cout << "the value of countup is " << result_a << endl;

// incrementing the value of the countup using the pre increment
result_b = ++secondcountup;
cout << "the value of countup is " << result_b << endl;

// incrementing the value of the countup using the post decrement
result_c = countdown--;
cout << "the value of countdown is " << result_c << endl;

// incrementing the value of the countup using the pre decrement
result_d = --secondcountdown;
cout << "the value of countdown is " << result_d << endl;


return 0;   
}