#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int X;
    cin >> X;
    bool prime = true;

    if (X < 2)
        prime = false;
    else {
        for (int i = 2; i <= sqrt(X); ++i) {
            if (X % i == 0) {
                prime = false;
                break;
            }
        }
    }

    cout << (prime ? "YES" : "NO") << endl;

    return 0;
}



