#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, d = 0, e = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    cout << fixed << setprecision(2);
	cout << (a + b + c + d + e) / 5 << endl;

    return 0;
}