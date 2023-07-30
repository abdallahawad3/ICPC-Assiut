#include <iostream>
using namespace std;
int main()
{
    int num, flag = 0;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            flag = 1;
        }
    }

    if (flag == 0)
        cout << -1;
    return 0;
}