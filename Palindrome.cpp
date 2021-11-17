#include <iostream>
using namespace std;
int main()
{
    int n, counter = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n/2; i++)
    {
        if (a[i] == a[n-(i+1)]) counter++;
    }
    if (counter == n/2) cout << "Yes ";
    else cout << "No ";
    return 0;
}
