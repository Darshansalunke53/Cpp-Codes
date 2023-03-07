/* 
    Darshan's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
 
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/
#include<iostream>
#include<string>

using namespace std;

int main()

{
    const int priceSmallRoom=25;
    const int priceLargeRoom=35;
    const double saleTax=0.06;
    cout<<"Welcome! To Darshan's Carpet Cleaning Service"<<endl;
    cout<<"Charges:"<<endl;
    cout<<priceSmallRoom<<"$ per small room\n"<<priceLargeRoom<<"$ per large room"<<endl;
    cout<<"Sales tax rate is:"<<saleTax<<endl;
    cout<<"Estimates are valid for 30 days"<<endl;
    
    int sRoom{0},lRoom{0};
    cout<<"Number Of Small Room and Number Of Large Rooms are:";
    cin>>sRoom>>lRoom;

    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"Number of small rooms:"<<sRoom<<endl;
    cout<<"Number of large rooms:"<<lRoom<<endl;
    cout<<"Price for small room:"<<priceSmallRoom<<'$'<<endl;
    cout<<"Price for large room:"<<priceLargeRoom<<'$'<<endl;
    cout<<"Cost:"<<(sRoom*priceSmallRoom)+(lRoom*priceLargeRoom)<<'$'<<endl;    
    cout<<"Sales Tax rate is:"<<saleTax<<'%'<<endl;    
    cout<<"========================================================="<<endl;

    cout<<"Total Cost:"
        <<((sRoom*priceSmallRoom)+(lRoom*priceLargeRoom))+((sRoom*priceSmallRoom)+(lRoom*priceLargeRoom)*saleTax)<<'$'<<endl;
    
    cout<<"Estimates are valid for 30 days"<<endl;
    return 0;
}