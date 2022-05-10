#include <iostream>
using namespace std;

int main()
{
    double x = 0, y = 0, t = 0, a = 0;

    cout << "\na = ";
    cin >> a;

    cout << "\nx = ";
    cin >> x;

    if (a <= x and (x + a) > 0)
    {
        y = a + log(x + a);
    }

    else if (a > x and sin(a * x) >= 0)
    {
        y = sqrt(sin(a * x));
    }

    if (a > y and (a - x) != 0)
    {
        t = y / (a - x);
    }

    else if (a == y and (a - x) != 0 and y != 0)
    {
        t = y / (a - x) + (a + x) / (y * y);
    }

    else if (a < y)
    {
        t = tan(a + x) + cos(2 * a * y);
    }

    cout << "\nt = " << t << "\n\ny = " << y << endl;
}