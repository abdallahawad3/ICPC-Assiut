#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, countEven = 0, countOdd = 0, countPositive = 0, countNegative = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > 0)
            countPositive++;
        if (abs(num) % 2 == 0)
            countEven++;

        if (num < 0)
            countNegative++;

        if (num % 2 != 0)
            countOdd++;
    }

    cout << "Even: " << countEven << "\n"
         << "Odd: " << countOdd << "\n"
         << "Positive: " << countPositive << "\n"
         << "Negative: " << countNegative;
    return 0;
}
