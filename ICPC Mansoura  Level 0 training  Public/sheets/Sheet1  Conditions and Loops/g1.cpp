#include <bits/stdc++.h>
using namespace std;

void solve()
{    
    long long a , b ;
    cin >> a >> b ;

    cout << a%10 + b%10 ;
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