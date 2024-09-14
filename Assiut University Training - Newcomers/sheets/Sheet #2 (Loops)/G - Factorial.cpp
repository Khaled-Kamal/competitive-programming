#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int n ;
  cin >> n ;
  while(n--)
  {
      int t ;
      cin >> t ;
      long long fact = 1 ;
      for(int i = 1 ; i<=t ; i++)
      {
          fact *= i ;
      }
      cout << fact << endl;
  }
    return 0 ;
}


