#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()

{
    char first_name[10];
    char last_name[10] {};
    char full_name[20] {};
    char temp[50]{};

    cout<<first_name;  //garbege value display

    cout<<"Please enter your first name: ";
    cin>>first_name;

    cout<<"Please enter your last name: ";
    cin>>last_name;

    cout<<"Your first name is "<<first_name<<" and it has no of charector is "<<strlen(first_name)<<endl;
    cout<<"Your last name is "<<last_name<<" and it has no of charector is "<<strlen(last_name)<<endl;

    cout<<"--------------------------------------------------------------------------------"<<endl;
    strcpy(full_name,first_name);
    strcat(full_name," ");
    strcat(full_name,last_name);
    cout<<full_name<<endl;

    cout<<"--------------------------------------------------------------------------------"<<endl;
    strcpy(temp,full_name);
    
    if(strcmp(temp,full_name)==0)
    {
        cout<<temp<<" and "<<full_name<<" are same "<<endl;
    }
    else
    {
        cout<<temp<<" and "<<full_name<<" are not same "<<endl;
    }
    cout<<"--------------------------------------------------------------------------------"<<endl;
    return 0;
}