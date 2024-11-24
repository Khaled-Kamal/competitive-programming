#include <iostream>
using namespace std;
int main()
{
    
    int count;
    cin >> count;
    
    for (int i = 1; i <= count; i++)
    {
        
        for (int z = 1; z <= count; z++)
        {
            if (i == z && i != (count + 1) / 2 && z != (count + 1) / 2)
            {
                cout << "\\";
            }
            else if (i == (count + 1) / 2 && z == (count + 1) / 2)
            {
                cout << "X";
            }
            else if (z != (count + 1) / 2 && i == (count + 1) - z)
            {
                cout << "/";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}