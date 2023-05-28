#include <iostream>
#include <string>

using namespace std;

int main(){

    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string keyhabet{"qwerTYUIopasDFGHjklzXCVBnmQWERtyuiOPASdfghJKLZxcvbNM"};

    string message{};
    string encrypMessage{};
    cout << "Write the message to encrypt: ";
    getline(cin,message);
    cout << endl;

    for(char c:message)
    {
        size_t position = alphabet.find(c);
        if(position != string::npos)
        {
            encrypMessage += keyhabet[position];
        }
        else
        {
            encrypMessage += c;
        }
    }

    cout << "Encrypting message..." << endl;
    cout << "\nEncrypted message: " << encrypMessage << endl ;


    string decryptMessage{};
    for(char c:encrypMessage)
    {
        size_t position = keyhabet.find(c);
        if(position != string::npos)
        {
            decryptMessage += alphabet[position];
        }
        else
        {
            decryptMessage += c;
        }
    }

    cout << endl << "Decrypting message..." << endl;
    cout << endl << "Decrypted message: " << decryptMessage << endl << endl;

    return 0;
};