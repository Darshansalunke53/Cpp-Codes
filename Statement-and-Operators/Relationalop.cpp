//Relational Operator

#include<iostream>
#include<string>

using namespace std;

int main()

{
    int num1{0};
    int num2{0};

    cout<<"Enter the value of integers:";
    cin>>num1>>num2;

    cout<<boolalpha<<endl;

    cout<<"Num1 is less than num2:"<<(num1<num2)<<endl;
    cout<<"Num1 is less than or equal num2:"<<(num1<=num2)<<endl;
    cout<<"Num1 is greter than num2:"<<(num1>num2)<<endl;
    cout<<"Num1 is greter than or equal num2:"<<(num1>=num2)<<endl;
    
    return 0;
}