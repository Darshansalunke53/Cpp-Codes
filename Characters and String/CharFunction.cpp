#include<iostream>
#include<string>
#include<cctype>
#include<cstring>

using namespace std;

int main()

{
    char str[]={"1234'5sddd'fdffg\n\t&^%23**~DARSHAN Salunke~     @!()-+=%^?<>;:"};
    int num_letters {};
    int num_digits {};
    int num_whitespace {};
    int num_punctuation {};
    int num_others {};
    int num_upper{};
    int num_lower{};

    for(auto st : str)
    {
        if(isalpha(st))
        {
            num_letters++;
        }
        else if(isdigit(st))
        {
            num_digits++;
        }
        else if(isspace(st))
        {
            num_whitespace++;
        }
        else if(ispunct(st))
        {
            num_punctuation++;
        }
        else
        {
            num_others++;
        }
        if(isupper(st))
        {
            num_upper++;
        }
        else if(islower(st))
        {
            num_lower++;
        }
    }
    cout << "Letters : " << num_letters << endl;
    cout << "Digits: " << num_digits << endl;
    cout << "Whitespace: " << num_whitespace << endl;
    cout << "Punctuation: " << num_punctuation << endl;
    cout << "Upper Letters: " << num_upper << endl;
    cout << "Lower letters: " << num_lower << endl;
    cout << "Others: " << num_others << endl;

    char str1[]={"This is a test - 1 2 3"};

    for(auto st:str1)
    {
        cout<<char (toupper(st));
    }


    
    return 0;
}