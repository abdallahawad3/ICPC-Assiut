#include <iostream>
using namespace std;
int solve(int n)
{
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
        return n;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (solve(i) != 0)
            cout << i << " ";
    }
    return 0;
}