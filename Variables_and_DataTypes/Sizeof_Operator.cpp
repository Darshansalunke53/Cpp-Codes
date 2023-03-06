#include<iostream>
#include<string>
#include<climits>  //for intiger size
#include<cfloat>   //for float size

using namespace std;

int main()

{
    cout<<"=========Information of size of Data type========="<<endl;
    cout<<"Int:"<<sizeof(int)<<endl;
    cout<<"char:"<<sizeof(char)<<endl;
    cout<<"unsigned int:"<<sizeof(unsigned int)<<endl;
    cout<<"short Int:"<<sizeof(short int)<<endl;
    cout<<"long Int:"<<sizeof(long)<<endl;
    cout<<"long long int:"<<sizeof(long long)<<endl;

    cout<<"================================================="<<endl;
    
    cout<<"float:"<<sizeof(float)<<endl;
    cout<<"double:"<<sizeof(double)<<endl;
    cout<<"long double:"<<sizeof(long double)<<endl;

    cout<<"=================================================="<<endl;

    cout<<"size_t:"<<sizeof(size_t)<<endl;
    cout<<"Boolean:"<<sizeof(bool)<<endl;

    cout<<"=================================================="<<endl;
    
    cout<<"Int max:"<<INT_MAX<<endl;
    cout<<"Int min:"<<INT_MIN<<endl;
    cout<<"char max:"<<CHAR_MAX<<endl;
    cout<<"char min:"<<CHAR_MIN<<endl;    
    cout<<"float max:"<<FLT_MAX<<endl;    
    cout<<"float min:"<<FLT_MIN<<endl;    



    return 0;
}