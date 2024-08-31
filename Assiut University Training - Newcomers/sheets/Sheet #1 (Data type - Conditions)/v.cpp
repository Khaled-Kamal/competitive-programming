#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool result;
    if (S == '<') {
        result = (A < B);
    } else if (S == '>') {
        result = (A > B);
    } else {
        result = (A == B);
    }

    if (result) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }

    return 0;
}