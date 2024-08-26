#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    
        string s;
        cin >> s ;
        int sum{};
        for(int i = 0 ; i < s.size();i++)
        {
            sum+=s[i] - '0';
        }
        cout << sum << '\n';
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