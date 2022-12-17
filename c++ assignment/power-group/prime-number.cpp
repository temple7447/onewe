#include <iostream>  
using namespace std; 
int prime_check_loop(int num){
     int i, chk=0, j;
  
    for(i=1; i<=num; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            cout<<i<<endl;
        chk = 0;
    }
    cout<<endl;
}

int prime_Number_check (int num){
    int k = 0;
   //check for prime number
   for (int w = 1; w <= num; w++)
   {
    int values = (num % w);
      if (values == 0)
      {
         k++;
      }
   }
   if (k == 2){
      cout << num << " is a prime number." << endl;
     prime_check_loop(num);
   }
   else
      cout << num << " is not a prime number" << endl;
}



int main()  
{  int prime;
     cout << "Enter any value to check the prime state" <<endl;
   cin >> prime;
    prime_Number_check(prime);
  return 0;  
}  