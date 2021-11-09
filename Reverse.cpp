#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int numbers[n];

    if (n <= 200)
        for (int i = 0; i < n; i++) 
            cin >> numbers[i];

    for (int i = 0; i < n; i++)
        cout << numbers[n - i - 1] << " ";
    return 0;
}
