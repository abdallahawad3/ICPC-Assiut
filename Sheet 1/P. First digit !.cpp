#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    if (((a / 1000) % 2 == 0))
        cout << "EVEN";
    else
        cout << "ODD";

    return 0;
}
