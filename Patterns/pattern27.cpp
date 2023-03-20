#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{};

    cout<<"Enter a nuber:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
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