// https://www.beecrowd.com.br/judge/en/problems/view/1042


#include <iostream>
using namespace std;
int main()
{
    int numbers[3];

    for (int i = 0; i < 3; i++) cin >> numbers[i];


    if (numbers[0] <= numbers[1] && numbers[0] <= numbers[2]){ // num[0]
        if (numbers[1] < numbers[2])
            cout << numbers[0] << endl << numbers[1] << endl << numbers[2] << endl;
        else
            cout << numbers[0] << endl << numbers[2] << endl << numbers[1] << endl;
    }

    else if (numbers[1] <= numbers[0] && numbers[1] <= numbers[2]){ //num[1]
        if (numbers[0] < numbers[2])
            cout << numbers[1] << endl << numbers[0] << endl << numbers[2] << endl;
        else
            cout << numbers[1] << endl << numbers[2] << endl << numbers[0] << endl;

    }
    else if (numbers[2] <= numbers[0] && numbers[2] <= numbers[1]){ //num[2]
        if (numbers[0] < numbers[1])
            cout << numbers[2] << endl << numbers[0] << endl << numbers[1] << endl;
        else
            cout << numbers[2] << endl << numbers[1] << endl << numbers[0] << endl;
    }


     cout << endl;

     for (int i = 0; i < 3; i++) cout << numbers[i] << endl;


  return 0;
}
