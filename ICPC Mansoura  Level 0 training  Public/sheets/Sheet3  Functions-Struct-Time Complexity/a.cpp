#include <bits/stdc++.h>
using namespace std;
const int M = int(2e5) + 10;
int f(int n)
{
  return 2 * n + 3 ;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
     
    int n ;
    cin >> n ;
     int f1 = f(n);
    int f2 = f(f1);
    int f3 = f(f2);
    int f_x_fx = f(n * f1);
    
    int result = f3 + 2 * f_x_fx;
    
    cout << result << endl;
}