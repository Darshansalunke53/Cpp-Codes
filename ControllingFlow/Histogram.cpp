#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()

{
    int num{};
    vector <int> vec{};

    cout<<"How many number yuo want? ";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        int digit{};
        cout<<"Enter a number"<<i<<":";
        cin>>digit;

        vec.push_back(digit);
    }

    for(auto val:vec)
    {
        for(int i=1;i<=val;i++)
        {
            if(i % 5 ==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<"_";
            }
        }
        cout<<endl;
    }
    return 0;
}