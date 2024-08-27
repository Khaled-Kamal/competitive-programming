#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159;
void solve()
{    
    double r ;
    cin >> r ;
    double area =pi* r * r ;
    cout << fixed << setprecision(4)<< "A=" << area ;
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
