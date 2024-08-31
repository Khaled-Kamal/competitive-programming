#include <iostream>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int start = max(l1, l2);
    int end = min(r1, r2);

    if (start <= end) {
        cout << start << " " << end << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}