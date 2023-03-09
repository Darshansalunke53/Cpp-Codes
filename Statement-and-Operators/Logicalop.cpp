//Logiacal Operator

#include<iostream>
#include<string>

using namespace std;

int main()

{
    const int lower=1;
    const int upper=100;
    int num{0};
    bool check{false};

    cout<<"Enter a number which is between "<<lower<<" and "<<upper<<endl;
    cin>>num;

    check=(num>lower && num<upper);
    cout<<boolalpha;
    cout<<"Statement is:"<<check<<endl;

    cout<<"Number is out of range of "<<lower<<" and "<<upper<<endl;
    cin>>num;

    check=(num<lower || num>upper);
    cout<<"Satement is:"<<!check<<endl; 

    return 0;
}