#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{};

    cout<<"Enter a number: ";
    cin>>n;

    int i=1;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        
        while(j<=n)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}