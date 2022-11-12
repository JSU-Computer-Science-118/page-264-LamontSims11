// Lamont Sims         J00968337
// Program #22         Page #264
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a, b, x, d;
    bool is_prime = true;

    cin >> b;
    
    x == b%2;
    d == 1;

    if (b == 0 || b == 1)
      {
        is_prime = false;
      }
    
    for (a = 2; a <= b/2; ++a)
      {
        if (b % a == 0){
            is_prime = false;
            break;
        }
      }
  

   if (is_prime)
      cout << "Number " << b << " is prime!" << endl;
   if (b%2 == d++)
      cout << x << endl;
      return 0;
   
}
