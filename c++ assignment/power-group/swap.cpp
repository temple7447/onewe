#include<iostream>

using namespace std;

void swap(int &a, int &b){

int temp = a;
a = b;
b = temp;
}
int main()
{
int x,y;
cout << "enter the values of x and y"<<endl;
cin >> x >> y;
swap(x,y);
cout <<"the values after swap are  x= " << x << " and  y= " << y << endl;
}