#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{0};

    cout<<"Enter a number: ";
    cin>>n;

    int i=1;
    int count=1;

    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}