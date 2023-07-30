#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long res = (a * b) - (c * d);
    cout << "Difference = " << res;
    return 0;
}
//! 10^10 gt 2^31