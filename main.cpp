// Lamont Sims         J00968337
// Program #22         Page #264
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    bool is_prime = true;

    cin >> b;
    

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
  

   while (is_prime){
      cout << "Number " << b << " is prime!" << endl;
      return 0;
   }

   if (b%2 == 0)
     cout << 2 << " ";
   if (b%3 == 0)
     cout << 3 << " ";
   if (b%5 == 0)
     cout << 5 << " ";
   if (b%7 == 0)
     cout << 7 << " ";
   if (b%11 == 0)
     cout << 11 << " ";
   if (b%13 == 0)
     cout << 13 << " ";
   if (b%17 == 0)
     cout << 17 << " ";
   if (b%19 == 0)
     cout << 19 << " ";
   if (b%23 == 0)
     cout << 23 << " ";
   if (b%29 == 0)
     cout << 29 << " ";
   if (b%31 == 0)
      cout << 31 << " ";

   return 0;

}
