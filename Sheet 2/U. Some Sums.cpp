#include <iostream>
using namespace std;
int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int n = i;
        int sumOfDigit = 0;
        while (n != 0)
        {
            int digit = n % 10;
            sumOfDigit += digit;
            n /= 10;
        }
        if (sumOfDigit >= a && sumOfDigit <= b)
            sum += i;
    }
    cout << sum;
    return 0;
}