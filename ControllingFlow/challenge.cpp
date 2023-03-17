#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()

{
    vector<int> list;
    char choice;

    do
    {
        cout << "\n";
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice:";
        cin >> choice;

        if (choice == 'P' || choice == 'p')
        {
            if (list.size() != 0)
            {
                cout << "[ ";
                for (auto val : list)
                {
                    cout << val << " ";
                }
                cout << ']' << endl;
            }
            else
            {
                cout << "[]-list is empty" << endl;
            }
        }
        else if (choice == 'A' || choice == 'a')
        {
            int digit_count{};
            cout << "How many number you want in list:";
            cin >> digit_count;

            cout << "Enter numbers in list(only integers)" << endl;

            for (int i = 0; i < digit_count; i++)
            {
                int num{};
                cin >> num;

                list.push_back(num);
                cout << num << " added " << endl;
            }
        }
        else if (choice == 'M' || choice == 'm')
        {
            if (list.size() == 0)
            {
                cout << "Unable to calculate the mean - no data" << endl;
            }
            else
            {
                int total{0};

                for (auto li : list)
                {
                    total += li;
                }
                cout << "Mean or Avarage of list is:" << (double)total / list.size() << endl;
            }
        }
        else if (choice == 'S' || choice == 's')
        {
            if (list.size() == 0)
            {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }
            else
            {
                int smallest = list.at(0);
                for (auto num : list)
                {
                    if (num < smallest)
                    {
                        smallest = num;
                    }
                }

                cout << "The smallest number is: " << smallest << endl;
            }
        }
        else if (choice == 'L' || choice == 'l')
        {
            if (list.size() == 0)
            {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }
            else
            {
                int largest = list.at(0);
                for (auto num : list)
                {
                    if (num > largest)
                    {
                        largest = num;
                    }
                }

                cout << "The largest number is: " << largest << endl;
            }
        }
        else if (choice == 'Q' || choice == 'q')
        {
            cout << "Good Bye!!!" << endl;
        }

        else
        {
            cout << "Unkown choice, enter valied choice again!" << endl;
        }

    } while (choice != 'Q' && choice != 'q');

    return 0;
}