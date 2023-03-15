#include<iostream>
#include<string>

using namespace std;

int main()

{
    // int num{};

    // cout<<"Enter a number:";
    // cin>>num;

    // if(num%2==0)
    // {
    //     cout<<num<<" is even number"<<endl;
    // }
    // else
    // {
    //     cout<<num<<" is odd number"<<endl;
    // }

    // cout<<num<<((num%2==0)? " even" : " odd")<<endl;

    int num1{}, num2{};
    cout<<"Enter a tow number separated dy space:"<<endl;
    cin>>num1>>num2;

    if(num1 != num2)
    {
        cout<<"Largest:"<<((num1>num2 ? num1:num2))<<endl;
        cout<<"Smallest:"<<((num1<num2 ? num1:num2))<<endl;
    }
    else
    {
        cout<<"Number are equal"<<endl;
    }
    return 0;
}