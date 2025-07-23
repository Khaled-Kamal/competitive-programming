// class Solution {
// public:
//    vector<int> twoSum(vector<int>& v, int target) {
//         map<int,int>m,indx;
//         vector<int>anss(2);
//         for (int i = 0; i < v.size(); ++i) {
//             if (m[v[i]]){
//                 ans[0]=i;
//                 ans[1]=indx[target-v[i]];
//                 return ans;
//             }
//             m[target-v[i]]=1;
//             indx[v[i]]=i;
//         }
//         return anss;
//     }
// };


#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define endl '\n'
#define int ll
//====================//

const int MOD = 998244353;
struct mint {
    int value;
    mint(int v = 0) { value = v % MOD; if(value < 0) value += MOD; }
    mint(int a, int b) : value(0) { *this += a; *this /= b; }

    mint& operator+=(mint const& b) { value += b.value; if(value >= MOD) value -= MOD; return *this; }
    mint& operator-=(mint const& b) { value -= b.value; if(value < 0) value += MOD; return *this; }
    mint& operator*=(mint const& b) { value = 1ll * value * b.value % MOD; return *this; }

    friend mint power(mint a, ll e) {
        mint res = 1; while(e) { if(e & 1) res *= a; a *= a; e >>= 1; }
        return res;
    }
    friend mint inv(mint a) { return power(a, MOD - 2); }
    mint &operator/=(mint const& b) { return *this *= inv(b); }
    friend mint operator+(mint a, mint const b) { return a += b; }
    friend mint operator-(mint a, mint const b) { return a -= b; }
    friend mint operator-(mint const a) { return 0 - a; }
    friend mint operator*(mint a, mint const b) { return a *= b; }
    friend mint operator/(mint a, mint const b) { return a /= b; }
    friend ostream& operator<<(ostream& os, mint const& a) { return os << a.value; }
    friend bool operator==(mint const &a, mint const& b) { return a.value == b.value; }
    friend bool operator!=(mint const& a, mint const& b) { return a.value != b.value; }
};

struct BIT {
    int n;
    vector<mint> t;

    BIT(int n): n(n), t(n + 1, 1) {}

    void add(int i, mint x) {
        for(; i < n; i |= i + 1) t[i] *= x;
    }

    mint get(int i) {
        mint res = 1;
        for(; i >= 0; i = (i & i + 1) - 1) res *= t[i];
        return res;
    }

    mint get(int l, int r) { return get(r) / get(l - 1); }
};


void magic() {
    int n, m; cin >> n >> m;
    vector<mint> p(n), a(m + 1, 1), b(m + 1, 1);
    vector<vector<array<int, 2>>> st(m);
    vector<array<int, 2>> v(n);

    for(int i = 0; i < n; ++i) {
        int l, r, x, y; cin >> l >> r >> x >> y;
        --l, --r;
        st[l].push_back({i, r});

        p[i] = mint(x, y);
        v[i] = {l, r};
    }

    BIT tree(m + 1);
    vector<mint> mul(n, 1);
    for(int i = m - 1; ~i; --i) {
        for(auto &[ind, r]: st[i]) tree.add(i, 1 - p[ind]);
        for(auto &[ind, r]: st[i]) mul[ind] = tree.get(i, r) / (1 - p[ind]);

    }

    vector<mint> dp(m + 1);
    dp[m] = 1;
    for(int l = m - 1; ~l; --l)
        for(auto &[me, r]: st[l])
            dp[l] += p[me] * mul[me] * dp[r + 1];

    cout << dp[0] << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int t = 1;
    while (t--) magic();
}
