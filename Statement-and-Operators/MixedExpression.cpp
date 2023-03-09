#include<iostream>
#include<string>

using namespace std;

int main()

{
    int num1{0}, num2{0}, num3{0};
    double avg{0.0};
    int total{0};
    char ch;

    cout<<"Enter a numbers:"<<endl;
    cin>>num1>>num2>>num3>>ch;

    total=num1+num2+num3;

    avg=static_cast<double>(total)/3;
    //avg=(double)(total)/3;
    cout<<"Avarage is:"<<avg<<endl;

    num1=(int)ch;

    cout<<num1<<endl;

    ch=(char)num1;
    cout<<ch<<endl;

    return 0;
}