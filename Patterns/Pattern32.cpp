/*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
*/



#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{};

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++)                   
    {
        int val=n-i+1;
        while(val)
        {
            cout<<"*";
            val--;
        }
        int space=i-1;
        while(space)
        {
            cout<<"  ";
            space--;
        }

        int val1=n-i+1;
        while(val1)
        {
            cout<<"*";
            val1--;
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=n-i;
        while(space)
        {
            cout<<"  ";
            space--;
        }

        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}