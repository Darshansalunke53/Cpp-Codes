/*
    For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!
*/

#include<iostream>
#include<string>

using namespace std;

int main()

{
    //Conversaion of cents
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    const int penny_value{1};

    int change_value{0};

    //solution1-whithout using modulo
    cout<<"Enter the amount in cents:";
    cin>>change_value;

    int balance{},dollar{},quarter{},dime{},nickel{},penny{};

    dollar = change_value / dollar_value;
    balance = change_value-(dollar * dollar_value);

    quarter = balance / quarter_value; 
    balance -= (quarter * quarter_value); 

    dime = balance / dime_value;
    balance -= (dime * dime_value);

    nickel = balance / nickel_value;
    balance -= (nickel * nickel_value);

    penny=balance;

    cout << "\nYou can provide this change as follows : " << endl;
    cout << "dollars  : " << dollar << endl;
    cout << "quarters : " << quarter << endl;
    cout << "dimes    : " << dime << endl;
    cout << "nickels  : " << nickel << endl;
    cout << "pennies  : " << penny << endl;

    //Solution2-With using modulo

    cout << "----------------------------" << endl;
    cout << "Solution using the modulo operator" << endl;
    cout << "----------------------------" << endl;

    balance = dollar = quarter = dime = nickel = penny = 0;  // reset everthing to zero

    dollar = change_value / dollar_value;   
    balance = change_value % dollar_value;
    
    quarter = balance / quarter_value;
    balance %= quarter_value;
    
    dime = balance / dime_value;
    balance %= dime_value;
    
    nickel = balance / nickel_value;
    balance %= nickel_value;
    
    penny = balance;

    cout << "\nYou can provide this change as follows : " << endl;
    cout << "dollars  : " << dollar << endl;
    cout << "quarters : " << quarter << endl;
    cout << "dimes    : " << dime << endl;
    cout << "nickels  : " << nickel << endl;
    cout << "pennies  : " << penny << endl;



    
    return 0;
}