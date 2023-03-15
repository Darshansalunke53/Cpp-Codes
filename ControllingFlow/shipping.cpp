/* 
    Shipping cost calculator
    
    Ask the user for package dimension in inches
    length, width, height - these should be integers
    
    All dimension must be 10 inches or less or we cannot ship it
    
    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()

{
    int length{0}, width{0}, height{0};
    double base_cost{2.50};

    const int tire1_threshould {100}; //volume
    const int tire2_threshould {500}; //volume

    const int max_dimension {10}; //iches

    double tier1_surcharge {0.10};  // 10% extra
    double tier2_surcharge {0.25};  // 25% extra
    
    int package_volume{0};

   cout << "Welcome to the package cost calculator" << endl;
   cout << "Enter length, width, and height of the package separated by spaces : ";
   cin>>length>>width>>height;

   if (length<=max_dimension && width<=max_dimension && height<=max_dimension)
   {
        double package_cost{0};
        package_volume=height*width*height;
        package_cost = base_cost;

        if(package_volume>tire2_threshould)
        {
            package_cost += package_cost * tier2_surcharge;
            cout << "adding tier 2surcharge" << endl;
        }
        else if (package_volume>tier1_surcharge)
        {
            package_cost+=package_cost*tier1_surcharge;
            cout << "adding tier 1surcharge" << endl;
        }
        cout << fixed << setprecision(2); // prints dollars nicely
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship " << endl;

   }
   else
   {
        cout<<"package rejected!-dimension exceeded"<<endl;
   }

   cout<<endl;

    return 0;
}