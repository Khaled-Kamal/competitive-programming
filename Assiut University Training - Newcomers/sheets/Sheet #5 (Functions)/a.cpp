#include <iostream>
using namespace std;

int sumNumbers(int x, int y) {
    return x + y;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << sumNumbers(x, y) << endl;
    return 0;
}
