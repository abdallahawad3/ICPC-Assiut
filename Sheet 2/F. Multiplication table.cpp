#include <iostream>
using namespace std;
int main()
{
    int n, x = 1;
    cin >> n;
    while (x <= 12)
    {
        cout << n << " * " << x << "  = " << n * x << endl;
        x++;
    }
    return 0;
}