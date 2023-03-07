#include<iostream>
#include<string>

using namespace std;

int main()

{
    //initilization of Array

    int arr[5]{0}; //Array size is 5 with initilization 0

    float arr1[]={1.2,333.4,5.6,77.8}; //Size of array decided by elements

    //Inserting element on a array

    cout<<"Enter a element into array:"<<endl;
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    cin>>arr[4];
    
    //Accessing Element on array of arr

    cout<<"Accessing Element on array of arr"<<endl;
    cout<<"Array of index 0 is:"<<arr[0]<<endl;
    cout<<"Array of index 1 is:"<<arr[1]<<endl;
    cout<<"Array of index 2 is:"<<arr[2]<<endl;
    cout<<"Array of index 3 is:"<<arr[3]<<endl;
    cout<<"Array of index 4 is:"<<arr[4]<<endl;

    //Accessing Element on array of arr1

    cout<<"Accessing Element on array of arr1"<<endl;
    cout<<"Array of index 0 is:"<<arr1[0]<<endl;
    cout<<"Array of index 1 is:"<<arr1[1]<<endl;
    cout<<"Array of index 2 is:"<<arr1[2]<<endl;
    cout<<"Array of index 3 is:"<<arr1[3]<<endl;

    //Updating the element of array

    arr1[0]=444.90;
    arr1[1]=33.45;
    arr1[2]=1.9;
    arr1[3]=88.45;

    cout<<"Updated Value of Array arr1:"<<endl;
    cout<<"Array of index 0 is:"<<arr1[0]<<endl;
    cout<<"Array of index 1 is:"<<arr1[1]<<endl;
    cout<<"Array of index 2 is:"<<arr1[2]<<endl;
    cout<<"Array of index 3 is:"<<arr1[3]<<endl;

    //Initilization of 2D Array

    int arr2[3][3]{{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Accessing 2D array:"<<endl;
    cout<<"Array element of index 0,0 is:"<<arr2[0][0]<<endl;
    cout<<"Array element of index 0,1 is:"<<arr2[0][1]<<endl;
    cout<<"Array element of index 0,2 is:"<<arr2[0][2]<<endl;
    cout<<"Array element of index 1,2 is:"<<arr2[1][2]<<endl;
    cout<<"Array element of index 2,2 is:"<<arr2[2][2]<<endl;

    cout<<"Inserting element on 2D array:"<<endl;
    cin>>arr2[0][0];
    arr2[0][1]=20;
    cout<<"Array element of index 0,0 is:"<<arr2[0][0]<<endl;
    cout<<"Array element of index 0,1 is:"<<arr2[0][1]<<endl;
    return 0;
}