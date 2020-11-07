#include <iostream>

using namespace std;

int main()
{
        string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

        string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

            cout << "Enter your secret message\n";
            string Secret_message {};
            getline(cin,Secret_message);
            string Encrypted_message {};
            cout << "Encrypting Message...\n";
            for (char a:Secret_message){
                size_t Position = alphabet.find(a);
            if (Position!=string::npos){
               char new_char {key.at(Position)};
               Encrypted_message+=new_char;
            }
            else{
                Encrypted_message+=a;
            }
            }
            cout <<"Encrypted message is " << Encrypted_message <<endl;

            string Decrypted_message {};
            for(char b:Encrypted_message){
            size_t position = Encrypted_message.find(b);
            char New_char {alphabet.at(b)};
            Decrypted_message+=New_char;

            }
            cout << "The Decrypted message is " <<Decrypted_message;

            return 0;
}

