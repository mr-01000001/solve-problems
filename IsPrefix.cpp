#include <iostream>
using namespace std;
int main()
{
    string str, str1;
    int counter = 0;
    cin >> str >> str1;

    for (int i = 0; i < str1.size(); i++)
        if (str1[i] == str[i]) counter+=1;

    if (counter == str1.size()) cout << "YES";
    else cout << "NO";
    return 0;
}
