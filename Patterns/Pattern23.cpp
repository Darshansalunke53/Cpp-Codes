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
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }

        int val=i;
        while(val)
        {
            cout<<i;
            val--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}