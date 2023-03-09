/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix   ++num
    Postfix      num++
    
    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/
#include<iostream>
#include<string>

using namespace std;

int main()

{
    int counter{0};
    int result{0};

    //Simple increment

    cout << "Counter : " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter : " << counter << endl;
  
    counter++;
    cout << "Counter : " << counter << endl;

    ++counter; 
    cout << "Counter : " << counter << endl;

    //Pre-increment
    counter=10;
    result=++counter;
    cout<<"result:"<<result<<endl;
    cout<<"counter:"<<counter<<endl;

    //Post-increment
    counter=10;
    result=counter++;
    cout<<"result:"<<result<<endl;
    cout<<"counter:"<<counter<<endl;

    return 0;
}