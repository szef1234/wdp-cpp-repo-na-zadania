#include <iostream>
using namespace std;
int main(){
    int a = 0, b = 0;
    char znak = ' ';
    cin >> a;
    cin >> b;
    cin >> znak;
    if (znak == '+'){
        cout << a + b << endl;
    }
    else if (znak == '-'){
        cout << a - b << endl;
    }
    else if (znak == '*'){
        cout << a * b << endl;
    }
    else if (znak == '/'){
        if (b == 0){
            cout << "Nie mozna dzielic przez zero" << endl;
        }
        else{
            cout << a / b << endl;
        }
    }
    else if (znak == '%'){
        if (b == 0){
            cout << "Nie mozna dzielic przez zero" << endl;
        }
        else{
            cout << a % b << endl;
        }
    }
    else{
        cout << "Nieznany znak dzialania" << endl;
    }
    return 0;
}