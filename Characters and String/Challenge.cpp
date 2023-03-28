#include<iostream>
#include<string>

using namespace std;

int main()

{
    string alphabet {" [abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"[ XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string encrypted_message{};
    string secreat_massage{};
    cout<<"Enter a Secreat massage:";
    getline(cin,secreat_massage);

    cout << "\nEncrypting message..." << endl;

    for(int i=0;i<secreat_massage.length();i++)
    {
        int j=alphabet.find(secreat_massage[i]);
        if(j>=0)
        {
            char ch=key[j];
            encrypted_message+=ch;
        }
        else
        {
            encrypted_message+=secreat_massage[i];
        }
    }
     
    cout<<"\nEncrypted_massage is: "<<encrypted_message<<endl;

    string decrypted_message{};

    cout<<"\nDecrypted_massage..."<<endl;

    for(auto ch:encrypted_message)
    {
        size_t position=key.find(ch);

        if(position != string::npos)
        {
            char new_char=alphabet.at(position);
            decrypted_message+=new_char;
        }
        else
        {
            decrypted_message+=ch;
        }
    }

    cout<<"\nDecrypted Massage: "<<decrypted_message<<endl;


    return 0;
}