#include <bits/stdc++.h>
#define int long long
using namespace std;
void KKB()
{

}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a , b ;
    cin >> a >> b ;

    reverse(a.begin(),a.end());
    if(b == a)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}