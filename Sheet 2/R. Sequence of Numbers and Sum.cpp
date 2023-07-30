#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    while (true)
    {
        int n, m, sum = 0;
        cin >> n >> m;
        int mn = min(n, m);
        int mx = max(n, m);
        if (n <= 0 || m <= 0)
            break;
        else
        {
            for (int i = mn; i <= mx; i++)
            {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
        }
    }
    return 0;
}