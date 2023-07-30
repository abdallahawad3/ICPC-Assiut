#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, sum = 0;
        cin >> n >> m;
        int mn = min(n, m);
        int mx = max(n, m);

        for (int i = mn + 1; i < mx; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}