#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{};
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            int space=i-1;
            while(space)
            {
                cout<<" ";
                space--;
            }
            for(int j=1;j<=(n-i+1);j++)
            {
                cout<<"*";
            }
            int start=n-i;
            while(start)
            {
                cout<<"*";
                start--;
            }
            cout<<endl;
        }
    return 0;
}