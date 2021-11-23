#include <iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;
    
    int freq[150] = {0};
    
    for (int i = 0; i < word.size(); i++)
        freq[word[i]]++;
    
    for (int i = 'a'; i <= 'z'; i++)
        if (freq[i])
            cout << (char) i << " " << freq[i] << endl;
        
    return 0;
}
