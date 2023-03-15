#include<iostream>
#include<string>

using namespace std;

int main()

{
    char letterGrade {};

    cout<<"Enter a grade to chech a marks"<<endl;
    cin>>letterGrade;

    switch (letterGrade)
    {
    case 'a':
    case 'A':
        cout<<"You got marks between 90-100"<<endl;
        break;
    case 'b':
    case 'B':
        cout<<"You got marks between 70-80"<<endl;
        break;
    case 'c':
    case 'C':
        cout<<"You got marks between 50-60, you should study hard"<<endl;
        break;
    case 'd':
    case 'D':
        cout<<"You got marks between 40-50, you must study if you want to pass"<<endl;
        break;
    case 'f':
    case 'F':
    {
        char confirm{};
        cout<<"Are you sure?(y/n)"<<endl;
        cin>>confirm;

        if (confirm == 'y' || confirm=='Y')
        {
            cout << "OK, I guess you didn't study..." << endl;
        }
        else if (confirm == 'n' || confirm == 'N')
            cout << "Good- go study!" << endl;
        else 
            cout << "Illegal choice" << endl;
        break;
    }
    
    default:
        cout << "Sorry, not a valid grade" << endl;
        break;
    }

    return 0;
}