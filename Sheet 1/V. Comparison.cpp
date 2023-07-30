#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    char x;
    cin >> a >> x >> b;
    if (a > b && x == '>')
        cout << "Right";

    else if (a < b && x == '<')
        cout << "Right";

    else if (a == b && x == '=')
        cout << "Right";

    else
        cout << "Wrong";

    return 0;
}
