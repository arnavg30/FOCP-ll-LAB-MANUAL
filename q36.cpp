/*A machine learning model multiplies matrices for neural network layers. Implement a solution
to multiply two matrices of order m×n and p×q (if valid).
*/
#include <iostream>
using namespace std;

int main()
{
int i,j,k;
    int r1, c1, r2, c2;
    cout << "enter no. of rows and columns for matrix 1 " << endl;
    cin >> r1 >> c1;
    cout << "enter no. of rows and columns for matrix 2 " << endl;
    cin >> r2 >> c2;
    
    if (c1 != r2){
        cout<<"invalid approach \n";
        return 0;
    }
    // else {
         int m1[10][10] , mu[10][10] ,m2[10][10] = {0};
        cout<<"enter value for matrix 1 \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {

            cout << "enter value for " << i << j << endl;
            cin >> m1[i][j];
        }
    }
    //  int m1[10][10], m2[10][10], mu[10][10] = {0};
    
    
   cout<<"enter value for matrix 2 \n";
    {
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {

                cout << "enter value for " << i << j << endl;
                cin >> m2[i][j];
            }
        }
    }
    
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                mu[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }


    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << mu[i][j] << " ";
        }
        cout << endl;
    }
//}
    return 0;
}