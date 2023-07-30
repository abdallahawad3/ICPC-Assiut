#include <iostream>
using namespace std;
int main()
{
    char ch;
    int tc, n;
    cin >> ch >> tc;
    while (tc--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cout << ch;
        cout << endl;
    }
    return 0;
}