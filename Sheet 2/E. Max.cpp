#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int max = x;
    while (n > 1)
    {
        cin >> x;
        if (max < x)
            max = x;
        n--;
    }
    cout << max;
    return 0;
}