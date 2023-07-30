// #include <iostream>
// using namespace std;
// int main()
// {
//     int reverse = 0;
//     int n;
//     cin >> n;
//     int befor = n;
//     while (n != 0)
//     {

//         int digit = n % 10;
//         reverse = (reverse * 10) + digit;
//         n /= 10;
//     }
//     cout << reverse << endl;
//     if (reverse == befor)
//         cout << "YES";
//     else
//         cout << "NO";
//     return 0;
//
// ! Another code to solve Palindrome problem
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    for (size_t i = 0; i < t.size(); i++)
    {
        if (t[i] == '0')
            continue;
        else
            cout << t[i];
    }
    cout << endl;
    if (s == t)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}