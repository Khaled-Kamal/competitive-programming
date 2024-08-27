#include <bits/stdc++.h>
using namespace std;
 
void solve(){}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     
    //  int tc = 1 ;
    //  // cin >> tc ;
    //  for(int i = 1 ; i <=tc;i++)
    //  {
    //     solve();
    //    // cout << '\n';
    //  }

   int l1 , r1 , l2 , r2 ;
   cin >> l1 >> r1 >> l2 >> r2;

    int st = max(l1,l2);
    int end = min(r1,r2);

    if(st <= end)
    {
        cout << st << ' ' << end ;
    }
    else
    {
        cout << -1 ;
    }

}
