#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   int t ;
   cin >> t ;
   queue<int> q;
   while(t--)
   {
       int d , n ;
       cin >> d >> n ;
       if(d == 1)
       {
           q.push(n);
       }
       else if(d == 2)
       {
           if(q.empty())
           {
               cout << "no" << '\n';
           }
           else
           {
               int f = q.front();
               q.pop();
               if(f == n)
               {
                   cout << "yes" << '\n';
               }
               else
               {
                   cout << "no" << '\n';
               }
           }
       }
   }

    return 0;
}
