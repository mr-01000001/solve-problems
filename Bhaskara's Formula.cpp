#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, r1, r2;

    cin >> a >> b >> c;
    if (a != 0 && b != 0 && c != 0 && sqrt( (b * b)-( 4 * a * c) ) > 0)
        {
        r1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        r2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        cout << fixed << setprecision(5) << r1 << endl;
        cout << fixed << setprecision(5) << r2 << endl;
        }
    else
        cout << "Impossivel calcular" << endl;
  

    /*
    formula**
    
    x1 = (-b + sqrt( (bb)-( 4ac) ) )/ 2a

    x2 = (-b - sqrt( (bb)-( 4ac) ) )/ 2a
    */



    return 0;
}
