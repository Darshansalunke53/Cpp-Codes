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
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }

        int space=n-i;
        while(space)
        {
            cout<<"    ";
            space--;
        }
         int val=i;
        for(int k=1;k<=i;k++)
        {
            cout<<val<<" ";
            val--;
        }

        cout<<endl;
    }
    return 0;
}