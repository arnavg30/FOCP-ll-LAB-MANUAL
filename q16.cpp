/*A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a
number and check whether it is prime.*/
#include <iostream>
using namespace std;

int main()
{
long int n;     
    cout << "enter the id no. \n";
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << "it is neither a prime nor a composite \n";
    }
    else
    {
        for (long int i = 2; i < n - 1; i++)
        {

            if (n % i == 0)
            {
                cout << "it is not a prime number \n";
            }

            else
            {
                cout << "it is a prime number";
            }
            break;
        }
    }
    return 0;
}