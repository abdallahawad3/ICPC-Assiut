#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    float tc, n;
    cin >> tc;
    int arr[5];
    while (tc--)
    {
        cin >> n;
        int i = 0;
        while (n != 0)
        {
            if ((n / 2) > (int(n) / 2))
                arr[i] = 1;
            else
                arr[i] = 0;
            i++;
            n /= 10;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
