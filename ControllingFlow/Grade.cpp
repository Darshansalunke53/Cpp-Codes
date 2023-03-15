#include<iostream>
#include<string>

using namespace std;

int main()

{
    int score{0};

    cout<<"Enter a Score of student:";
    cin>>score;

    char letterGrade;

    if (score>=0 && score<=100)
    {
        if (score >= 90)
        {
            letterGrade='A';
        }
        else if (score >= 80)
        {
            letterGrade='B';
        }
        else if (score >= 70)
        {
            letterGrade='C';
        }
        else if (score >= 60)
        {
            letterGrade='D';
        }
        else
        {
            letterGrade='F';
        }
        cout<<"Your Gread is "<<letterGrade<<endl;

        if (letterGrade == 'F')
        {
            cout<<"Sorry,Your fail!"<<endl;
        }
        else
        {
            cout<<"Congragulation"<<endl;
        }
    }
    else
    {
        cout<<"your score is out of range!"<<endl;
    }
    return 0;
}