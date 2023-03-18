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
        int val=n-i+1;
        while(val)
        {
            cout<<"*"<<" ";
            val--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}