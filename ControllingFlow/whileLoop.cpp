#include<iostream>
#include<string>

using namespace std;

int main()

{
    int num{};

    cout<<"Enter a positive integer - start a countown"<<endl;
    cin>>num;

    while(num>0)
    {
        cout<<num<<endl;
        num--;
    }
    cout<<"Blastoff!"<<endl;

    int count{};
    cout<<"Enter a number:";
    cin>>count;
    int i{1};
    while(count>=i)
    {
        cout<<i<<" ";
        i++;
    }

    bool flag{false};
    int num1{};

    while(!flag)
    {
        cout<<"Enter a number between 1-5"<<endl;
        cin>>num1;

        if(num1<=1 || num1>=5)
        {
            cout<<"Out off range,Thank you!"<<endl;
        }
        else
        {
            cout << "Thanks!" << endl;
            flag=true;
        }
    }


    return 0;
}