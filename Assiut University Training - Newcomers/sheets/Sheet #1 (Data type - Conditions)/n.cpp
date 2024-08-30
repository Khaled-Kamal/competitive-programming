#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  char x;
  cin >> x ;
  
  if(x>='a' && x<='z')
  {
      x=x-32;
  }
  else
  {
      x=x+32;
  }
  cout << x ;
    return 0 ;
}