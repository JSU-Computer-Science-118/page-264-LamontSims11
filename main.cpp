// Lamont Sims         J00968337
// Program #22         Page #264
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    bool is_prime = true;
    int c, d, e, f, g, h, i, j, k, l, m;

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
  

   if (is_prime)
      cout << " Number " << b << " is prime !" << endl;
  return 0;

}

