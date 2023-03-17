 #include<iostream>
 #include<string>
 #include<vector>
 
 using namespace std;
 
 int main()
 
 {
    for(int i{0};i<10;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i{1};i<100;i+=10)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i{1},j{5};i<=5;i++,j++)
    {
        cout<<i<<"*"<<j<<":"<<i*j<<endl;
    }

    int arr[5]{0};
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector <int> vec;

    for(int i=0;i<5;i++)
    {
        // cin>>vec.at(i); //use only when you know the size of vector
        // cin>>vec[i];    //use only when you know the size of vector
        vec.push_back(i);
    }
    for(int i=0;i<5;i++)
    {
        cout<<vec.at(i)<<" ";
    }
    return 0;
 }