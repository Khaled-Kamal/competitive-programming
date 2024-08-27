#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t , rate ;
    cin >> t ;
    while(t--)
    {
        cin >> rate ;
        if(1900 <= rate)
        {
            cout << "Division 1" << endl;
        }
        else if(1600 <= rate && rate <1900)
        {
            cout << "Division 2" << endl;
        }
        else if(1400<=rate && rate < 1600)
        {
            cout << "Division 3" << endl;
        }
        else if(rate <=1399)
        {
            cout << "Division 4" << endl;
        }
    }




    return 0 ;
}