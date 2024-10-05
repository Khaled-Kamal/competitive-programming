
#include <bits/stdc++.h>
#define si(x) int(x.size())
using namespace std;
using ll = long long;
using ld = long double;
 
#define mp   make_pair
#define pb   push_back
#define eb   emplace_back
#define sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)    (*min_element((a).begin(), (a).end()))
#define maxe(a)    (*max_element((a).begin(), (a).end()))
#define mini(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin()
#define all(v) v.begin(),v.end()
#define ln cout<<"\n";
#define ll long long
#define bp(x) __builtin_popcount(x)
#define print(v) for(auto &ele:v)cout<<ele<<" "<<endl
#define yes cout<<"YES"
#define no  cout <<"NO"
#ifdef KhaledBadr1
#include "KhaledBadr1.h"
#endif
#define fa  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define free freopen("collectingofficer.in","rt",stdin);
#define rv(n)  return void(cout<<n);
#define ll long long
#define L(i, j, k) for(int i = (j); i <= (k); ++i)
#define R(i, j, k) for(int i = (j); i >= (k); --i)
#define uint unsigned int
#define ull unsigned long long
#define fix ios_base::sync_with_stdio(0),cin.tie(0)
 
//=============================== Solve By : Khaled Kamal Badr ===============================
 
bool prime(int num) { if (num <= 1) return false; int ch = 2; while (ch * ch <= num) { if (!(num % ch)) return false; ch++; }return true; }
int fact(int n) { if (n == 0) return 1; return n * fact(n - 1); }
int nPr(int n, int r) { int val = 1; for (int i = n - r + 1; i <= n; i++) val *= i; return val; }
int nCr(int n, int r) { return fact(n) / (fact(r) * fact(n - r)); }
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
int biPow(int x, int y) { int val = 1; while (y) { if (y % 2) { val *= x; y--; } else { x *= x; y /= 2; } }return val; }
int modPow(int x, int y, int m) { int val = 1; x %= m; while (y) { if (y % 2) { val *= x; val %= m; y--; }
else { x *= x; x %= m; y /= 2; } }return val % m; }
string mv[8] = { "U", "R", "D", "L", "UR","UL","DR","DL" };
int xd[8] = { -1, 0, 1,  0, -1, -1, 1,  1 };
int yd[8] = { 0, 1, 0, -1,  1, -1, 1, -1 };
 
//===============================The solution====================================================

int calculateSquareArea(const vector<int>& x, const vector<int>& y) {
    
    int sideLength = max(*max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end()),
                         *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end()));
    
    return sideLength * sideLength;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        
        vector<int> x(4), y(4);
        for (int j = 0; j < 4; ++j) {
            cin >> x[j] >> y[j];
        }

        
        cout << calculateSquareArea(x, y) << endl;
    }

    return 0;
}

 
