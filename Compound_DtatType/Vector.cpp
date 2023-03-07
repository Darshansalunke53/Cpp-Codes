#include<iostream>
#include<string>
#include<vector>   //don't forget to include vector file

using namespace std;

int main()

{
    //Initilization of vector

    vector<int> num;

    vector<char> ch{'a','b','c','d'};

    vector<float> dec(3); //vector of size 3

    vector<int> scr(5,10); //vector of size 5 and initilization with 10
    
    //inserting element in vector

    //1) by using indexing

    cin>>dec[0];
    cin>>dec.at(1);
    cin>>dec[2];

    //2)by using push_back function

    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);

    //Accessing element of vector

    cout<<"Vector at index 0 is:"<<num[0]<<endl;
    cout<<"Vector at index 1 is:"<<num[1]<<endl;
    cout<<"Vector at index 2 is:"<<num.at(2)<<endl;
    cout<<"Vector at index 3 is:"<<num.at(3)<<endl;

    //cout<<"Vector at index 3 is:"<<dec.at(3)<<endl; don't do this

    //Initilizing 2D vectors

    vector<vector<int>> a{{1,2,3},{4,5,6},{7,8,9}};

    cout<<"2D vector element is:"<<a[0][0]<<endl;
    cout<<"2D vector element is:"<<a[2][2]<<endl;
    cout<<"2D vector element is:"<<a.at(1).at(2)<<endl;

    a[1][1]=10;

    cout<<"Updated value is:"<<a[1][1];


    return 0;
}