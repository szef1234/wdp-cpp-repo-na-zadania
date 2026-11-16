#include <iostream>

using namespace std;
int main(){
    double o1 = 0, o2 = 0, o3 = 0, o4 = 0, o5 = 0;
    int niedostateczne = 0;
    cin >> o1;
    cin >> o2;
    cin >> o3;
    cin >> o4;
    cin >> o5;
    if (o1 == 1) niedostateczne = niedostateczne + 1;
    if (o2 == 1) niedostateczne = niedostateczne + 1;
    if (o3 == 1) niedostateczne = niedostateczne + 1;
    if (o4 == 1) niedostateczne = niedostateczne + 1;
    if (o5 == 1) niedostateczne = niedostateczne + 1;
    double srednia = (o1 + o2 + o3 + o4 + o5) / 5.0;
    cout << "Srednia: " << srednia << endl;
    cout << "Liczba ocen niedostatecznych: " << niedostateczne << endl;
    return 0;
}