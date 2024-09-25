#include <bits/stdc++.h>
using namespace std;

void solve()
{}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  string s ;
  cin >> s ;
   string target = "heidi";
  int index{};
  for (size_t i = 0; i < s.size(); i++)
  {
    if(s[i] == target[index])
    {
       index++;
    }
    if(index == target.size())
    {
      cout << "YES";
     return 0 ;
    }
  }

  cout << "NO";
}
