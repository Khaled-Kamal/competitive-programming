#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string expression;
    getline(cin, expression);

    stringstream ss(expression);
    int A, B, C;
    char S, Q;
    ss >> A >> S >> B >> Q >> C;

    int result;
    if (S == '+') {
        result = A + B;
    } else if (S == '-') {
        result = A - B;
    } else {
        result = A * B;
    }

    if (result == C) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}