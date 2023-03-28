#include<iostream>
#include<string>  //important for string class
#include<iomanip>

using namespace std;

int main()

{
    //Creating a string object
    // string str;  //Empty string means constructor with no argument
    // string str1 {"Darshan"};
    // string str2 {str1};
    // string str3 {"Salunke",3}; //Sal
    // string str4 {str1,1,3}; //ars
    // string str5 (5,'x'); //xxxxx

    // cout<<str<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;
    // cout<<str3<<endl;
    // cout<<str4<<endl;
    // cout<<str5<<endl;

    // //Assigning a value to string object

    // str="Hello";
    // cout<<str<<endl;

    // //concatination
    // str1=str+" "+"World"+'!';
    // cout<<str1<<endl;

    // //Read from user thourgh keybord
    // cout<<"---Use of cin---"<<endl;
    // cin>>str;   //string without space or embedded blanks
    // cout<<str<<endl;

    // cout<<"---use of getline---"<<endl;
    // getline(cin,str2);  //string with space 
    // cout<<str2<<endl;

    //Manipulating string objects
    /*
        1] append(value)
        2] insert(index, value)
        3] replace(index_start, index_end, value)
        4] erase(index_start, index_end)
        5] subscription string_object[index]=single value
    */

   //1] append(value) add a value to the end of string

//     string s1 {"12345"};
//     string s2 {"abcde"};

//     s1.append(s2);
//     s1.append("A");  //in append take a value only in duble quoats "value"
//     s1.append("WWW");
//     cout<<s1<<endl;

//    //2] insert(index, value)

//     s2.insert(3,s1);
//     s2.insert(0,"WWW");
//     s2.insert(3,"@");
//     cout<<s2<<endl;

//    //3] erase(index_start, number_of_character)

//     s1.erase(5,5);
//     cout<<s1<<endl;
//    //4] replace(index_start, number_of_character, value)

//     s1.replace(2,2,"Hello");
//     cout<<s1<<endl;
   
//    //5] subscription string_object[index]=value

//     s1[2]='3';
//     s1[4]='@';
//     cout<<s1<<endl;

//Relational Operations on string
/* 
    >,<,<=,>=,==,!= and compare(value or variable) function also used
    comparition between
    -string object and c-style literal
    -between two srting objects
    -between string object and c-style variable

    *answer will be only in true or false
*/

//    string s3 {"ABC"};
//    string s4 {"XYZ"};
//    string s5=s3+s4;

//    cout<<boolalpha;
//    cout<<s3<<" and "<<s4<<" is equal : "<<(s3==s4)<<endl;
//    cout<<s3<<" and "<<s4<<" is not equal : "<<(s3!=s4)<<endl;
//    cout<<s3<<" is less then "<<s4<<":"<<(s3<s4)<<endl;
//    cout<<s5<<" is greter than "<<s4<<":"<<(s5>s4)<<endl;
//    cout<<s5<<" is greter than or equal to "<<s4<<" : "<<(s5>=(s3+s4))<<endl;
//    cout<<s3<<" is less than or equal to "<<s4<<":"<<(s3<=s4)<<endl;

//    int cm=s3.compare(s4);

//    if(cm==0)
//    {
//         cout<<s3<<"="<<s4<<endl;
//    }
//    else if(cm>0)
//    {
//         cout<<s3<<">"<<s4<<endl;
//    }
//    else
//    {
//         cout<<s3<<"<"<<s4<<endl;
//    }

//String Characteristics
/*
    1] length() use to denote number of element currently stored in string
    2] size() use to denote number of element currently stored in string
    3] capacity() use to indicates the total elements that can be strored in string
    4] max_size() use to indicates the largest possible size of a string object
    5] empty() use to show is string object is empty or not

    Note:-
    1]When string is empty capacity is 15, but its capacity increased depends on number of elemeents
    2]size() and length() both are same use to denote number of elements in string object
*/

    // string st;
    // cout<<"Size = "<<st.size()<<endl;
    // cout<<"Length = "<<st.length()<<endl;
    // cout<<"Capacity = "<<st.capacity()<<endl;
    // cout<<"Maximum Size = "<<st.max_size()<<endl;
    // cout<<"Empty : "<<(st.empty() ? "yes" : "No")<<endl;
    // cout<<"\n\n";

    // cout<<"Enter a string (one world)"<<endl;
    // getline(cin,st);
    // cout<<"Size = "<<st.size()<<endl;
    // cout<<"Length = "<<st.length()<<endl;
    // cout<<"Capacity = "<<st.capacity()<<endl;
    // cout<<"Maximum Size = "<<st.max_size()<<endl;
    // cout<<"Empty : "<<(st.empty() ? "yes" : "No")<<endl;
    // cout<<"\n\n";

    // st.resize(15);
    // cout<<"Status after resizing:"<<endl;
    // cout<<"Size = "<<st.size()<<endl;
    // cout<<"Length = "<<st.length()<<endl;
    // cout<<"Capacity = "<<st.capacity()<<endl;
    // cout<<"Maximum Size = "<<st.max_size()<<endl;
    // cout<<"Empty : "<<(st.empty() ? "yes" : "No")<<endl;
    // cout<<"\n\n";

//Accessing Characters in String
    /*
        1] at(index)
        2] substr(start_index, length)
        3] find(value)
        4] find_first_of(value) for finding the first occurrence of the element in string
        4] find_last_of(value)  for finding the last occurrence of the element in string

        Note: we require loop in this, mostly we use for loop or range base loops
    */

    // string st1 {"Darshan Salunke"};

    // cout<<"String contain elements"<<endl;

    // for(int i=0;i<st1.size() /*or length()*/;i++)
    // {
    //     cout<<st1[i] /*or st1.at(i)*/;
    // }
    // cout<<"\n\n";
    // cout<<"String print again"<<endl;

    // for(auto str:st1)
    // {
    //     cout<<str;
    // }
    // cout<<"\n\n";

    // int x=st1.find("sh");
    // cout<<"Element at index:"<<x<<"\n";

    // int x1=st1.find_first_of("a");
    // cout<<"Element at index:"<<x1<<endl;

    // int x2=st1.find_last_of("e");
    // cout<<"Element at index:"<<x2<<endl;

    // int count=0;

    // for(auto st:st1)
    // {
    //     if(st=='a')
    //     {
    //         count++;
    //     }
    // }
    // cout<<count<<endl;

    // //find index of elements

    // for(int i=0;i<st1.length();i++)
    // {
    //     if(st1[i]=='n')
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    // cout<<endl;

    // //substring

    // cout<<st1.substr(6,3);

    // string word;

    // cout<<"Enter a word to find in string: ";
    // cin>>word;

    // size_t found=st1.find(word);

    // if(found != string::npos)
    // {
    //     cout << "Found " << word << " at position: " << found << endl;
    // }
    // else
    // {
    //     cout << "Sorry, " << word <<  " not found" << endl;
    // }

//comparing and swapping string
    /*
        1] compare() 
        2] swap()
        
        Note: compare function gives three values
            1] if value is 0 the both strings are equal
            2] if value is 1 then first string is greater than second string
            3] if value is -1 then second string is greater than first string

    */

   string st2 {"Road"};
   string st3 {"Read"};
   string st4 {"Red"};

   cout<<"St2= "<<st2<<endl;
   cout<<"St3= "<<st3<<endl;
   cout<<"St4= "<<st4<<endl;

   int cm1=st2.compare(st3);

   if(cm1==0)
   {
        cout<<"st2 == st3"<<endl;
   }
   else if (cm1 > 0)
   {
        cout<<"st2 > st3"<<endl;
   }
   else
   {
        cout<<"st2 < st3"<<endl;
   }

   int a=st2.compare(0,2,st3,0,2); // 0,2 is index from 0 to two element of st2 and 0,2 is index from 0 to two element of st3
   int b=st3.compare(1,1,st4,1,1); //

   cout<<"a= "<<a<<"\n"<<"b= "<<b<<endl;

   st2.swap(st3);
   cout<<"After swap: "<<endl;
   cout<<"st2 = "<<st2<<endl;
   cout<<"st3 = "<<st3<<endl;


    return 0;
}