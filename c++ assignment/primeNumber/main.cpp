#include <iostream>  
using namespace std; 



int prime_Number_check_loop(int num){
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
    int j = 0;
   //check for prime number
   for (int i = 1; i <= num; i++)
   {
    int values = (num % i);
      if (values == 0)
      {
         j++;
      }
   }
   if (j == 2){
      cout << num << " is a prime number." << endl;
     prime_Number_check_loop(num);
   }
   else
      cout << num << " is not a prime number" << endl;
}



int main()  
{  int num;
     cout << "Enter any number to check if it is a prime number and list out all the prime number between two and the number: ";
   cin >> num;
    prime_Number_check(num);
  return 0;  
}  