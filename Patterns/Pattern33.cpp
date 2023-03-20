#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{};

    cout<<"Enter a nuber: ";
    cin>>n;

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
    for(int i=1;i<n;i++)
    {
        int start=n-i;
        while(start)
        {
            cout<<"*";
            start--;
        }

        int space=i;
        while(space)
        {
            cout<<"  ";
            space--;
        }
        
        int val=n-i;
        while(val)
        {
            cout<<"*";
            val--;
        }
        
        cout<<endl;
    }
    return 0;
}