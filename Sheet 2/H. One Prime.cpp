#include <iostream>
using namespace std;
int main()
{
    int n, fact = 0;
    cin >> n;
    for (int i = 2; i < (n / 2); i++)
    {
        if (n % i == 0)
            fact = 1;
    }
    if (fact == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}