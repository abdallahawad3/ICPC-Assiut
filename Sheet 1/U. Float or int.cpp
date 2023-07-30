#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int found = s.find('.');
    string after = s.substr(found + 1, s.length());
    string befor = s.substr(0, found);
    int i = stoi(after);
    if (i == 0)
        cout << "int " << befor;
    else
        cout << "float " << befor << " "
             << "0." << after;
    return 0;
}
