#include<iostream>
#include<string>

using namespace std;

int main()

{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    //Using for loop
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    //Using while loop
    int i=1;
    while(i<=num)
    {
        int j=1;
        while(j<=num)
        {
            cout<<"*"<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}