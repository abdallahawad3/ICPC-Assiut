#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 0;
        return 0;
    }

    else if (n == 2)
    {
        cout << 0 << " " << 1;
        return 0;
    }
    else
    {
        int a = 0, b = 1;
        cout << a << " " << b << " ";
        for (int i = 2; i < n; i++)
        {
            long long c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }
    return 0;
}