#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t]; 
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++; 
        }
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}
