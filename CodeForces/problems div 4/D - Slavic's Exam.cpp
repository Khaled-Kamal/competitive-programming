#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
     string a, b;
        cin >> a >> b;
        int j{};
        
        for(int i = {}; i < a.size(); i++) {
            if(j >= b.size()) {
                break;
            }
            if(a[i] == b[j]) {
                j++;
                continue;
            }
            if(a[i] == '?') {
                a[i] = b[j];
                j++;
                continue;
            }
        }
        
        for(int i = {}; i < a.size(); i++) {
            if(a[i] == '?') {
                a[i] = 'a';
            }
        }
        
        if(j >= b.size()) {
            cout << "YES" << '\n';
            cout << a << endl;
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