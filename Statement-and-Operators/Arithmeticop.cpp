/*Arithmetic Operators
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulo or remainder  (works only with integers)
    
    +, -. * and /  operators are overloaded to work with multiple types such as int, double, etc.
    %  only for integer types
*/




#include<iostream>
#include<string>

using namespace std;

int main()

{
    int num1{200};
    int num2{100};

    cout<<num1<<'+'<<num2<<"="<<num1+num2<<endl;

    int result{0};

    result=num1+num2;
    cout<<"Addition is:"<<result<<endl; 

    result=num1-num2;
    cout<<"Substraction is:"<<result<<endl;

    result=num1*num2;
    cout<<"Multiplication is:"<<result<<endl;

    result=num1/num2;
    cout<<"Division is:"<<result<<endl;

    result=num1%num2;
    cout<<"Modulo is:"<<result<<endl;
    return 0;
}