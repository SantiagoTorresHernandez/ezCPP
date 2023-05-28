// challenge of section 6 "variables and constants"

#include <iostream>

using namespace std;

int main(){

    const double smallRoomPrice {25}, largeRoomPrice {35},
    taxRate {0.06};
    
    cout << "Welcome to Frank's Carpet Cleaning Services" << endl;
    cout << "\nHow many small rooms are we cleaning today?" << endl;
    int smallRooms {0}, largeRooms {0};
    cin >> smallRooms;
    cout << "How many large rooms are we cleaning today?" << endl;
    cin >> largeRooms;
    float cost = (smallRoomPrice*smallRooms)+(largeRoomPrice*largeRooms);

    cout << "\nEstimate for cleaning service"<<endl;
    cout << "Small rooms: " << smallRooms << endl;
    cout << "Large rooms: " << largeRooms << endl;
    cout << "Price for small rooms: $" << smallRoomPrice << endl;
    cout << "Pricec for large rooms: $" << largeRoomPrice << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" <<cost*taxRate<< endl;
    cout << "==================================" << endl;
    cout << "Total estimate: $" << cost + (cost*taxRate) << endl;
    cout << "Estimate is valid for 30 days" << endl;

    return 0;
}