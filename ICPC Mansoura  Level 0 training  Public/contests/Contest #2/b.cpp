#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    long long oddSum = 0, evenSum = 0;
    
    for (int i = 0; i < N; ++i) {
        if ((i + 1) % 2 == 0) { // i+1 because we are given 1-indexed array
            evenSum += A[i];
        } else {
            oddSum += A[i];
        }
    }
    
    if (oddSum > evenSum) {
        cout << "Odd" << endl;
    } else if (evenSum > oddSum) {
        cout << "Even" << endl;
    } else {
        cout << "Equal" << endl;
    }
    
    return 0;
}
