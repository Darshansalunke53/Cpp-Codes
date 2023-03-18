#include<iostream>
#include<string>

using namespace std;

int main()

{
    int num{};

    cout<<"Enter a number: ";
    cin>>num;

    // int i=1;

    // while(i<=num)
    // {
    //     int j=num;

    //     while(j)
    //     {
    //         cout<<j<<" ";
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    int i=1;

    while(i<=num)
    {
        int j=1;
        while(j<=num)
        {
            cout<<num-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}