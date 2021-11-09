#include <iostream>
using namespace std;
int main()
{
    int n, max_num = -1000000, max_num1 = -1000000;
    cin >> n;

    int numbers[n];

    if (n <= 200)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];

            if (numbers[i] > max_num)
            {
                max_num1 = max_num;
                max_num = numbers[i];
            }
            else max_num1 = numbers[i];

        }
    }
    cout << "\n --> " << max_num + max_num1 << " from ( " << max_num << " + " << max_num1 << " )" << endl;
    return 0;
}
