#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floorl(a / b) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(a / b) << endl;
    cout << "round " << a << " / " << b << " = " << round(a / b);
    return 0;
}
