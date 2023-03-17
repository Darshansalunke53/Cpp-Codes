#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;


int main()

{
    int score[] {10,20,30,40};

    for(int pt:score)
    {
        cout<<pt<<" ";
    }
    cout<<endl;

    vector <double> temperature{89.9,55.7,88.93,33.12};
    double avrageTemp{};
    double total{};
    int count=0;

    for(auto temp:temperature)
    {
        total+=temp;
        count++;
    }
   cout<<fixed<<setprecision(8);
   avrageTemp=total/count;
   cout<<(avrageTemp)
       <<endl;

   for(auto val:{10,20,30,40,50})
   {
        cout<<val<<" ";
   }
   cout<<endl;

   for(auto str:"This is loop")
   {
        if(str!=' ')
        {
            cout<<str;
        }
   }
   cout<<endl;

   for(auto str:"This is loop")
   {
        if(str==' ')
        {
            cout<<" @ ";
        }
        else
        {
            cout<<str;
        }
   }

    
    

    return 0;
}