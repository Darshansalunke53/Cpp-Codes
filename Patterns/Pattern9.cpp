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
        // int count=i;
        for(int j=1;j<=i;j++)
        {
            // cout<<count<<" ";
            // count++;
            cout<<i+j-1<<" "; 
        }
        cout<<endl;
    }
    return 0;
}