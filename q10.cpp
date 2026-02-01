/*A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a
leap year or not*/
#include <iostream>
using namespace std;

int main()
{
    int y;
    cout << "enter the year " << endl;
    cin >> y; 

    if (y % 4 == 0 || y % 400 == 0)
    {
        cout << "it is a leap year" << endl;
    }

    else
    {
        cout << "not a leap year";
    }

    return 0;
}