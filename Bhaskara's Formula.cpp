#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, r1, r2;

    cin >> a >> b >> c;
    
    if (a != 0 && b != 0 && c != 0 && ((b * b)-( 4.00 * a * c)  > 0)) {
        r1 = (-b + sqrt(pow(b, 2) - 4.00*a*c)) / (2*a);
        r2 = (-b - sqrt(pow(b, 2) - 4.00*a*c)) / (2*a);
        cout << fixed << setprecision(5) << r1 << endl;
        cout << fixed << setprecision(5) << r2 << endl;
    }
        
        
    else cout << "Impossivel calcular" << endl;

    /*  **FORMULA 
    
    x1 = (-b + sqrt( (bb)-( 4ac) ) )/ 2a

    x2 = (-b - sqrt( (bb)-( 4ac) ) )/ 2a
    */

    return 0;
}
