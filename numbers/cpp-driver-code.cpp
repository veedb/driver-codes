#include <iostream>

#include<bits/stdc++.h>
using namespace std;

bool isMagic (int n )
int sum = 0;

/// so here we can continue th loop
while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
     
    // Return true if sum becomes 1.
    return (sum == 1);
}
  
// Driver code
int main()
{
    int n = 1234;
    if (isMagic(n))
        cout << "Magic Number";
    else
        cout << "Not a magic Number";
    return 0;
}
   
  
   
