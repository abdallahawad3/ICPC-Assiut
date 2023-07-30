#include <iostream>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << (a % 10) + (b % 10);
    return 0;
}
