// programa para convertir centavos en cambio


#include <iostream>

using namespace std;

int main(){
    
    int cents{};
    int dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};
    double aux{};

    cout<<"Enter the amount of cents: ";
    cin >> cents;

    dollars = cents / 100;
    aux = cents - (dollars * 100 );
    cents = aux;

    quarters = cents / 25;
    aux = cents - (quarters * 25 );
    cents = aux;

    dimes = cents / 10;
    aux = cents - (dimes * 10 );
    cents = aux;

    nickels = cents / 5;
    aux = cents - (nickels * 5 );
    cents = aux;

    pennies = cents / 1;
    aux = cents - (pennies * 1 );
    cents = aux;

    cout << "\nYou can give change: " << endl;
    cout << "Dollars: " << dollars << endl
         << "Quarters: " << quarters << endl
         << "Dimes: " << dimes << endl
         << "Nickels: " << nickels << endl
         << "Pennies: " << pennies << endl;

    return 0;
}