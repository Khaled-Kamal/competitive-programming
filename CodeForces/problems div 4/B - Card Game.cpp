#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    
     int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        int res{};
        
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                int f1 = (i == 0) ? a1 : a2;
                int s2 = (i == 0) ? a2 : a1;
                int sl1 = (j == 0) ? b1 : b2;
                int tt= (j == 0) ? b2 : b1;
                
                int ans{};
                int kh{};
                
                if (f1 > sl1) ans++;
                else if (f1 < sl1) kh++;
                
                if (s2> tt) ans++;
                else if (s2 < tt) kh++;
                
                if (ans > kh) res++;
            }
        }
        
        cout << res << '\n';
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