#include <bits/stdc++.h>
using namespace std;

void solve()
{    
   int w ;
   cin >> w ;
   if(w % 2 ==0 && w >2)
   {
    cout << "YES" ;
   }
   else
   {
    cout << "NO" ;
   }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     
    int tc = 1 ;
   // cin >> tc ;>>
    for(int i = 1 ; i <=tc;i++)
    {
        solve();
        cout << '\n';
    }
    
}
 ; 