#include <iostream>
using namespace std;

void solve()
{
    long long a, b;
    long long c, d;
    cin >> a >> b >> c >> d;
    long long equation = a % 100 * b % 100 * c % 100 * d % 100;
    if (equation <= 9)
    {
        cout << "0" << equation;
    }
    else
    {
        cout << equation;
    }
}


int main()
{
    solve();
}