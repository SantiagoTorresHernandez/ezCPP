#include <iostream>
#include <string>
#include <vector>

using namespace std;

// function prototypes
char printMenu();
char upperCase(char &);
void printList(vector<int>);
void addNumber(vector<int> &);
double meanList(vector<int>);
int smallestNum(vector<int>);
int largestNum(vector<int>);
void quit();

// main
int main()
{

    char option{};
    vector<int> nums;
    do
    {
        option = printMenu();
        option = upperCase(option);
        if (option == 'P')
        {
            printList(nums);
        }
        else if (option == 'A')
        {
            addNumber(nums);
        }
        else if (option == 'M')
        {
            cout << "The mean of the list is: " << meanList(nums) << endl;
        }
        else if (option == 'S')
        {
            cout << "The smallest number is: " << smallestNum(nums) << endl;
        }
        else if (option == 'L')
        {
            cout << "The largest number is: " << largestNum(nums) << endl;
        }
        else if (option == 'Q')
        {
            quit();
        }
        else
        {
            cout << "Invalid option - plese enter a valid option" << endl;
        }
        

    } while (option != 'Q');

    return 0;
};

// definition printMenu
char printMenu(){
    char option{};
    cout << "\nBienvenido al menu de opciones" << endl;
    cout << "------------------------------" << endl;
    cout << "\n____________________Menu____________________ " << endl;
    cout << "P - Print the list" << endl;
    cout << "A - Add a number to the list" << endl;
    cout << "M - Display the mean of the list" << endl;
    cout << "S - Display the smallest number of the list" << endl;
    cout << "L - Display the largest number of the list" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nSelect one of the option above: ";
    cin >> option;
    cout << endl;
    return option;
}

// definition upperCase
char upperCase(char &letter){
    return toupper(letter);
}

// definition printList
void printList(vector<int> nums){
    if (nums.empty())
    {
        cout << "[] - The list is empty" << endl;
    }
    else
    {
        for (unsigned i = 0; i < nums.size(); i++)
        {
            cout << nums.at(i) << " ";
        }
        cout << endl;
    };
}

// definition of addNumber
void addNumber(vector<int> &lista){
    int newNum;
    cout << "\nAdd a number to the list: ";
    cin >> newNum;
    lista.push_back(newNum);
    cout << endl
         << newNum << " was added" << endl;
}

// definition meanList
double meanList(vector<int> lista){
    double counter{};
    double mean{0};
    if (lista.empty())
    {
        cout << "[] list is empty, mean: ";
        return mean;
    } else
    {
        for (unsigned i{}; i<lista.size();i++)
        {
            counter += lista.at(i);
        }
        mean = counter / lista.size();
        return mean;
    };
}

// definition smallestNum
int smallestNum(vector<int> lista){
    if(lista.empty())
    {
        cout << "[] list is empty - smalles number: ";
        return 0;
    }else
    {
        int aux = lista.at(0);
        for (unsigned i = 1; i < lista.size(); i++)
        {
            if (lista.at(i)<aux)
            {
                aux = lista.at(i);
            }
        }
        return aux;
    }
}

// definition largestNum
int largestNum(vector<int> lista){
    if(lista.empty())
    {
        cout << "[] list is empty - largest number: ";
        return 0;
    }else
    {
        int aux = lista.at(0);
        for(unsigned i = 1; i < lista.size(); i++){
            if(lista.at(i)>aux){
                aux = lista.at(i);
            }
        }
        return aux;
    }
}

//definition of quit
void quit(){
    cout << "Goodbye" << endl;
}

