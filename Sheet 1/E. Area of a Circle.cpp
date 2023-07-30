#include <iostream>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main()
{
    double r, res;
    cin >> r;
    res = (r * r * pi);
    cout << setprecision(11) << res;
    return 0;
}
