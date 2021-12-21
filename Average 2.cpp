#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c, mid;

    cin >> a >> b >> c;

    /*  a = 2
        b = 3
        c = 5
    */

    mid = ((a*2) + (b*3) + (c*5)) / (2 + 3 + 5);

    cout << "MEDIA = " << fixed << setprecision(1) << mid << endl;

    return 0;
}
