#include <iostream>
using namespace std;
int main()
{
    int n, mini = 2147483647, mini1 = 2147483647, mini2 = 2147483647;
    cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        if (numbers[i] < mini)
        {
            mini1 = mini;
            mini = numbers[i];
        }
       else if (numbers[i] < mini1)
       {
            mini2 = mini1;
            mini1 = numbers[i];
       }
    }

   cout << mini << " " << mini1 << " " << mini2 << " ";
    return 0;
}
