/*Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
The program should continue executing based on the user's choice and display the result of each operation*/
#include <iostream>
using namespace std;

int main()
{
    int choice, a, b, add, sub, mul;
    float div;
    cout << "enter two numbers \n";
    cin >> a >> b;
    cout << "1. for ADD , 2. for SUBTRACTION , 3. for MULTIPLICATION , 4. DIVISION \n";
    cout << "enter your choice of calculation \n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        add = a + b;
        cout << "the addition is " << add;
        break;
    case 2:

        sub = a - b;
        cout << "the subtraction is " << sub;
        break;

    case 3:
        mul = a * b;
        cout << "the multiplication is " << mul;
        break;

    case 4:
        div = a / b;
        cout << "the division is " << div;
        break;

    default:
        cout << "invalid entry";
    }

    return 0;
}