#include <iostream>
using namespace std;
int main()
{
    const int index = 5;
    int numbers[index];
  
    for (int i = 0; i < index; i++) cin >> index[i];
  
    // normal print.
    for (int i = 0; i < index; i++) cout << numbers[i] << " ";

    cout << endl;

        // first way.
    for (int i = 0; i < index ; i++) cout << numbers[index - i - 1] << " ";

    cout << endl;

        // sec way.
    for (int i = index - 1; i >= 0; i--) cout << numbers[i] << " ";
    return 0;
}
