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
            cout<<k;
        }

        int start=i-1;
        int val=start;
        for(int l=1;l<=start;l++)
        {
            cout<<val;
            val--;
        }
        cout<<endl;
    }
    return 0;
}