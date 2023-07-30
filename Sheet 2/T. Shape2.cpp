#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;
    for (int row = 1; row <= s; row++)
    {
        for (int space = 1; space <= (-row + s); space++)
        {
            cout << " ";
        }
        for (int stars = 1; stars <= ((2 * row) - 1); stars++)
            cout << "*";

        cout << endl;
    }
    return 0;
}
/*

           *
          ***
         *****
        *******

*/
