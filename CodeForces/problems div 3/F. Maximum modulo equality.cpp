#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

const int MOD = 1e9 + 7;
const int N = 1e5 + 7;

const int MAXN = 200005;
const int LOG = 20;

int sparse[MAXN][LOG], log_table[MAXN];
void build_sparse(const vector<int>& diff, int n) {
    for (int i = 0; i < n; i++) {
        sparse[i][0] = diff[i];
    }
    for (int j = 1; (1 << j) <= n; j++) {
        for (int i = 0; i + (1 << j) - 1 < n; i++) {
            sparse[i][j] = gcd(sparse[i][j-1], sparse[i + (1 << (j-1))][j-1]);
        }
    }
}
int query_gcd(int l, int r) {
    int len = r - l + 1;
    int j = log_table[len];
    return gcd(sparse[l][j], sparse[r - (1 << j) + 1][j]);
}
void solve() {

    log_table[1] = 0;
    for (int i = 2; i < MAXN; i++) {
        log_table[i] = log_table[i / 2] + 1;
    }

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {

            while (q--) {
                int l, r;
                cin >> l >> r;
                cout << "0\n";
            }
            continue;
        }


        vector<int> diff(n-1);
        for (int i = 0; i < n-1; i++) {
            diff[i] = abs(a[i+1] - a[i]);
        }


        build_sparse(diff, n-1);

        while (q--) {
            int l, r;
            cin >> l >> r;
            --l; --r;
            if (l == r) {
                cout << "0\n";
            } else {
                cout << query_gcd(l, r-1) << "\n";
            }
        }
    }

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ; //cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
        cout << '\n';
    }
    return (0 - 0);

}
