/*
Write a program to calculate the sum of following series where n is input by user.
1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n Write a program to calculate the sum of following series where n is input by user.
1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }

    cout << "The sum of the series is: " << sum;
}