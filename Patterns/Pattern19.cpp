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
        int space=n-i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }

        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}