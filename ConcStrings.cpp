#include <iostream>
using namespace std;
int main()
{
    string first, second;
    int si;
    
    cin >> first >> second;

    si = first.size();
    if (si < second.size())
        si = second.size();

    for (int i = 0; i < si; i++)
    {
        if (i < first.size()) cout << first[i] << " ";
        if (i < second.size()) cout << second[i] << " ";
    }

    return 0;
}
