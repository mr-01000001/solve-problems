#include <iostream>
using namespace std;
int main()
{
    int n;
    int max_val = -1, max_repeat = -1;
    cin >> n;

    int numbers[n];

    if (n <= 200)
    {
        for (int i = 0; i < n; i++)
            cin >> numbers[i];
            
        for (int i = 0; i < n; i++)
        {
            int repeat = 0;
            for (int j = 0; j < n; j++)
                repeat += numbers[i] == numbers[j];

            if (max_repeat == -1 || max_repeat < repeat)
                max_repeat = repeat, max_val = numbers[i];
        }
    }

    cout << max_val << " " << max_repeat << endl;
    return 0;
}
