#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (int(x) >= 65 && int(x) <= 90)
        cout << char(int(x) + 32);
    else if (int(x) >= 97 && int(x) <= 122)
        cout << char(int(x) - 32);

    return 0;
}
