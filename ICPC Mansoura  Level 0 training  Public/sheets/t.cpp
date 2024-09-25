#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    
    int n ;
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1 ; j <= 5 ; ++j)
        {
            cin >>  n;
            if(n == 1)
            {
                cout << abs(i - 3) + abs(j - 3);
                break;
            }
        }
    }
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int tc = 1 ;
  // cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
       solve();
    }

}
