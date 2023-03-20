#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{};

    cout<<"Enter a numbre: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int start=n-i;
        while(start)
        {
            cout<<" ";
            start--;
        }
        char ch='A';

        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        int bg=i-1;
        char val='A'+i-2;
        while(bg)
        {
            cout<<val;
            val--;
            bg--;
        }
        cout<<endl;

    }
    return 0;
}