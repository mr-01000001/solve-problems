#include <iostream>
using namespace std;
int main()
{
    string num;     int container = 0;
    
    cin >> num;

    if (num.size() <= 6)
    {
        for (int i = 0; i < num.size(); i++) 
            container += (int) num[i];
            
        cout << container * 3;
    }
    else cout << "Maximum 6 letters.";

    return 0;
}
