#include <iostream>
using namespace std;
int main()
{
    int tc;
    string x;
    cin >> tc;
    while (tc--)
    {
        cin >> x;
        for (int i = x.size() - 1; i >= 0; i--)
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }

    return 0;
}