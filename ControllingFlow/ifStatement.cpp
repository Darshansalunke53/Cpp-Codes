#include<iostream>
#include<string>

using namespace std;

int main()

{
    int num {};
    const int min {10};
    const int max {100};

    cout<<"Enter a numbert between "<<min<<" and "<<max<<endl;
    cin>>num;

    if (num>=min)
    {
        cout<<"===============if statement 1=================="<<endl;
        cout<<num<<" is greater than or equal to "<<min<<endl;

        int diff{num-min};
        cout<<num<<" is "<<diff<<" times greater than "<<min<<endl;

    }

    if (num<=max)
    {
        cout<<"=================if statement 2=================="<<endl;
        cout<<num<<" is less than or equal to "<<max<<endl;

        int diff{max-num};
        cout<<num<<" is "<<diff<<" times less than "<<max<<endl;
    }

    if (num>=min && num<=max)
    {
        cout<<"================if statement 3=================="<<endl;
        cout<<num<<" is in range"<<endl;
        cout<<"Above both statement that is statement 1 and statement 2 is executed"<<endl;
    }

    if (num==min || num==max)
    {
        cout << "\n=========== If statement 4 =============" << endl;   
        cout << num << " is right on a boundary " << endl;
        cout << "This means all 4 statements display " << endl;
    }
    return 0;
}