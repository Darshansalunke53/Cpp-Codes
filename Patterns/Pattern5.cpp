#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    int i=1;
    int count=1;

    while(i<=n)
    {
        int j=n;
        while(j)
        {
            cout<<count<<" ";
            count++;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}