#include <bits/stdc++.h>
using namespace std;

void solve()
{    
     vector<long long> who(3);
     for(int i = 0 ; i < 3 ; i++)
     {
        cin >> who[i];
     }
     sort(who.begin(),who.end());
     for(int i = 0 ; i <3 ; i++ )
     {
        cout << who[3-1] + who[3 -2] ;
        break;
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