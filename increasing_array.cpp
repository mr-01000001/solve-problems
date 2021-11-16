#include <iostream>
using namespace std;
int main()
{
    int n, a[200], counter = 0;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n; i >= 0; i--)
        if (a[i] >= a[i-1]) counter++;

    if (counter == n) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
