#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string imie = "";
    int wiek = 0;
    double wzrost = 0.0;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj wiek: ";
    cin >> wiek;
    cout << "Podaj wzrost: ";
    cin >> wzrost;
    cout << "Imie: " << imie << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Wzrost: " << fixed << setprecision(2) << wzrost << endl;
    return 0;
}