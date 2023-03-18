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
        int space=i-1;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }

        int start=n-i+1;
        for(int k=1;k<=start;k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}