//Equality Operator(==,!=)

#include<iostream>
#include<string>

using namespace std;

int main()

{
    bool equal_to{false};
    bool not_equal_to{false};

    int num1{}, num2{};

    cout<<"Enter a Values:"<<endl;
    cin>>num1>>num2;

    cout<<boolalpha<<endl;

    equal_to=(num1 == num2);
    not_equal_to=(num1 != num2);


    cout<<num1<<" is equal to "<<num2<<":"<<equal_to<<endl;
    cout<<num1<<" is not equal to "<<num2<<":"<<not_equal_to<<endl;


    return 0;
}