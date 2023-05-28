//section 9 challenge
// options menu

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> lista;
    char option{};

    cout << "Bienvenido al menu de opciones"<<endl;
    cout << "------------------------------" << endl;

    do{
        
        cout<<"\n____________________Menu____________________ " << endl;
        cout << "P - Print the list" << endl;
        cout << "A - Add a number to the list" << endl;
        cout << "M - Display the mean of the list" << endl;
        cout << "S - Display the smallest number of the list" << endl;
        cout << "L - Display the largest number of the list" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nSelect one of the option above: ";
        cin >> option;
        cout << endl;

        if (option == 'P' || option == 'p'){
            if (lista.empty())
                { 
                    cout << "[] - The list is empty" << endl;
                } else
                {
                    for (unsigned i = 0; i<lista.size();i++){
                        cout << lista.at(i) << " ";
                    }
                }; 
        } else if (option == 'A' || option == 'a'){
            int newNum;
            cout << "\nAdd a number to the list: ";
            cin >> newNum;
            lista.push_back(newNum);
            cout << endl << newNum << " was added" << endl;
        } else if (option == 'M' || option == 'm'){
            if (lista.empty())
                {
                    cout << "[] list is empty, unable to calculate mean " << endl;
                } else
                {
                    double counter{};
                    double mean{};
                    for (unsigned i{}; i<lista.size();i++){
                        counter += lista.at(i);
                    }
                    mean = counter / lista.size();
                    cout << "The mean of the list is: " << mean << endl;
                };
        } else if (option == 's' || option == 'S'){
            int aux = lista.at(0);
            for (unsigned i = 1; i < lista.size(); i++){
                if (lista.at(i)<aux){
                    aux = lista.at(i);
                }
            }
            cout << "The smallest number is: " << aux << endl;
        } else if (option == 'L' || option == 'l'){
            int aux;
            aux = lista.at(0);
            for(unsigned i = 1; i < lista.size(); i++){
                if(lista.at(i)>aux){
                    aux = lista.at(i);
                }
            }
            cout << "The largest number is: " << aux << endl;
        } else if (option == 'Q' || option == 'q'){
            cout << "Goodbye" << endl;
        } else {
            cout << "Invalid option - try again" << endl;
        }

    }while(option != 'Q' && option != 'q');

return 0;
};
