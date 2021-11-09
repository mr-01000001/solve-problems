#include <iostream>
using namespace std;
int main()
{
    const int value = 199;
    int num [value];

    int n, mx = -100000, mx1 = -100000;
    cin >> n;
    if (n < 200)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            if (num[i] > mx)
            {
                mx1 = mx;
                mx = num[i];
            }
        }
    }

    cout << "Max = " << mx << " SecMax = " << mx1 << endl;


    return 0;
}
