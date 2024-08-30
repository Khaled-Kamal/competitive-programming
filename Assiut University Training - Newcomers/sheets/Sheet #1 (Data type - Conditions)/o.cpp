#include <string>      
#include <iostream>     
#include <sstream>  
using namespace std;
void solution1()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s == '+')
    {
        cout << a + b << endl;
    }

    else if (s == '-')
    {
        cout << a - b << endl;
    }
    else if (s == '*')
    {
        cout << a * b << endl;
    }

    else if (s == '/')
    {
        cout << a / b << endl;
    }
}



int main()
{
    solution1();
}