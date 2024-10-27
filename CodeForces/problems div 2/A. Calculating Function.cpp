
#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int n)
{
     if(n&1)
     {
         return -(n + 1) / 2;
     }
     else
     {
         return n / 2 ;
     }
}
signed main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


     int n ;
     cin >> n ;
     cout << f(n) ;
}
