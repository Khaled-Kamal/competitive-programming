#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n ;
   cin >> n ;
   int arr[n];
    for (int i = 0; i < n; ++i) {

        int a , b ;
        cin >> a >> b ;
        if(a<b || b<a)
        {
            cout << "Rectangle" << endl;
        }
        else if(a==b)
        {
            cout <<"Square" << endl;
        }

    }

}
