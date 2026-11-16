#include <iostream>

using namespace std;

int main(){

    int a = 0, b = 0;
    cin >> a;
    cin >> b;

    if (b == 0){
    
        cout << "Nie mozna dzielic przez zero" << endl;
    }
    else if (a % b == 0){
    
        cout << "Pierwsza liczba jest podzielna przez druga" << endl;
    }
    else{
    
        cout << "Pierwsza liczba nie jest podzielna przez druga" << endl;
    }
    return 0;
}