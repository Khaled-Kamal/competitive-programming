#include <bits/stdc++.h>
using namespace std;
#define int long long

struct SegmentTree {
    vector<int> tree;
    int size;

    void init(int n) {
        size = n;
        tree.resize(2 * n);
    }

    void build(vector<int>& arr) {

        for (int i = 0; i < size; i++)
            tree[size + i] = arr[i];
        for (int i = size - 1; i > 0; --i)
            tree[i] = tree[2 * i] + tree[2 * i + 1];
    }

    void update(int index, int value) {
    
        index += size;
        tree[index] = value;
        for (index /= 2; index >= 1; index /= 2)
            tree[index] = tree[2 * index] + tree[2 * index + 1];
    }

    int query(int left, int right) {
        
        left += size;
        right += size + 1;
        int sum = 0;
        while (left < right) {
            if (left % 2 == 1) sum += tree[left++];
            if (right % 2 == 1) sum += tree[--right];
            left /= 2;
            right /= 2;
        }
        return sum;
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> who(n);
    for (int i = 0; i < n; i++)
        cin >> who[i];

    SegmentTree st;
    st.init(n);
    st.build(who);

    for (int i = 1; i < n; i++)
        cout << st.query(i, i) << ' ';
    cout << st.query(0, 0);
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (size_t i = 1; i <= tc; i++) {
        solve();
    }

    return 1 - 1;
}
