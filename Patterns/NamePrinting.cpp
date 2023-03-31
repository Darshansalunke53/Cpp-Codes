#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n{};
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            if(i==1 || i==n)
            {
                int val=n-1;
                while(val)
                {
                    cout<<"*";
                    val--;
                }
            }
            else
            {
                for(int j=1;j<=n;j++)
                {
                    if(j==1 || j==n)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            }
            cout<<" ";
            if(i==1 || i==n-1)
            {
                if(i==1)
                {
                    cout<<"  ";
                }
                else
                {
                    cout<<" ";
                }
                
                int st=n;
                while(st)
                {
                    cout<<"*";
                    st--;
                }
            }
            else
            {
                cout<<" ";
                if(i==n)
                {
                    cout<<" ";
                }
                for(int j=1;j<=n;j++)
                {
                    if(j==1 || j==n)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            }
            cout<<endl;
        }
    return 0;
}