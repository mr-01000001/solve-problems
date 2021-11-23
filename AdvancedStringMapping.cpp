#include <iostream>
using namespace std;
int main()
{
    string x = "abcdefghijklmnopqrstuvwxyz0123456789";
    string y = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

    int st_mapping[140] = {0};

    for (int i = 0; i < x.size(); i++)
        st_mapping[x[i]] = y[i];

    string character;
    cin >> character;

    for (int i = 0; i < character.size(); i++)
    {
        if ('A' <= character[i] && character[i] <= 'Z') continue;
        character[i] = st_mapping[character[i]];
    }

    cout << character;
    return 0;
}
