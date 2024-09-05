#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

     string s ;
     cin >> s ;

     int up = 0 , l = 0 ;
     for(char c : s)
     {
         if(isupper(c))
         {
             up++;
         }
         else
         {
             l++;
         }
     }

     if(up > l)
     {
         for(char&c : s)
         {
             c = toupper(c);
         }
     }
     else
     {
         for(char&c : s)
         {
             c = tolower(c);
         }
     }

     cout << s ;
    return 0;
}
