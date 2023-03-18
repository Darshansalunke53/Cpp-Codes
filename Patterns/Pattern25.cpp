#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{};

    cout<<"Enter a number: ";
    cin>>n;

    int i=1;

    while(i<=n)
    {
        int j=1;
        while(j<=(n-i+1))
        {
            cout<<j<<" ";
            j++;
        }

        int start=i-1;
        while(start)
        {
            cout<<"* * ";
            start--;
        }

        int val=n-i+1;
        while(val)
        {
            cout<<val<<" ";
            val--;
        }

        cout<<endl;
        i++;
    }
    return 0;
}