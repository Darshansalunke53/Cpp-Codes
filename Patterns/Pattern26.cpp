#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{};

    cout<<"Enter a number:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }

        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }

        int start=i-1;

        while(start)
        {
            cout<<"*";
            start--;
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(i-1);j++)
        {
            cout<<" ";
        }

        for(int k=1;k<=(n-i+1);k++)
        {
            cout<<"* ";
        }

        int start=n-i;

        while(start)
        {
            cout<<"*";
            start--;
        }
        cout<<endl;
    }
    return 0;
}