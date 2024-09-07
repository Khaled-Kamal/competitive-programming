#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    
         int n, s, m;
        cin >> n >> s >> m;
        
        vector<pair<int, int>> who(n);
        for (int i = 0; i < n; ++i) {
            cin >> who[i].first >>who[i].second;
        }
        
       
        sort(who.begin(), who.end());
        
        bool vaild = false;
        
        if (who[0].first >= s) {
           vaild = true;
        }
        
        if (m - who[n-1].second >= s) {
           vaild = true;
        }
        
        for (int i = 1; i < n; ++i) {
            if (who[i].first - who[i-1].second >= s) {
               vaild= true;
                break;
            }
        }
        
        if (vaild) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int tc = 1 ;
    cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
       solve();
    }
   
}