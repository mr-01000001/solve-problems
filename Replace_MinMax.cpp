#include <iostream>
using namespace std;
int main()
{
    int n, a[200];
    int minimum = 20000, maximum = 0, container;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (minimum > a[i]) minimum = a[i];
        if (maximum < a[i]) maximum = a[i];
    }

    for(int i = 0; i < n; i++)
    {
        if (a[i] == minimum) a[i] = maximum;
        else if (a[i] == maximum) a[i] = minimum;
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}
