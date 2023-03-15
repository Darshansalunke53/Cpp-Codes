#include<iostream>
#include<string>

using namespace std;

int main()

{
    int num {};
    const int target {10};

    cout<<"Enter a number:"<<endl;
    cin>>num;

    if (num>=target)
    {
        cout<<"=================if statement================"<<endl;
        cout<<num<<" is greter than or equal to "<<target<<endl;

        int diff{num - target};
        cout<<num<<" is "<<diff<<" times greter than "<<target<<endl;
    }
    else
    {
        cout<<"=================else statement==============="<<endl;
        cout<<num<<" is less than "<<target<<endl;
    }



    return 0;
}