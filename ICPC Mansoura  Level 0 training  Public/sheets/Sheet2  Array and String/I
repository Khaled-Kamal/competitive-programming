#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

    int n ;
    cin >> n ;
    vector<int> a(n);
    for (int i = 0; i <n ; ++i) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
       vector<int> v;
    for (int i = 0; i <n / 2 ; ++i) {
        cout << a[i] << ' ';
        v.push_back(a[i]);
    }
     reverse(v.begin(),v.end());
    for (int i = 0; i <v.size() ; ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    vector<int> vc;
    for (int i = 0; i <n / 2 ; ++i) {
        cout << a[i] << ' ';
        vc.push_back(a[i]);
    }
    reverse(vc.begin(),vc.end());
    for (int i = 0; i <vc.size() ; ++i) {
        cout << vc[i] << ' ';
    }


}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
   //cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
    }

}
