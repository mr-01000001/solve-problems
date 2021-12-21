#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, x1, y, y1, resultt;

    cin >> x >> y >> x1 >> y1;

    resultt = sqrt(((x1 - x) * (x1 - x)) + ((y1 - y) * (y1 - y)));


    cout << fixed << setprecision(4) << resultt << endl;
    return 0;
}
