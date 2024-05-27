/*
Compute the natural logarithm of 2, by adding up to n terms in the series
1 - 1/2 + 1/3 - 1/4 + 1/5 -... 1/n
where n is a positive integer and input by user.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    cout << "Enter a positive integer: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum -= 1.0 / i;
        else
            sum += 1.0 / i;
    }
    cout << "Result of the series is: " << sum << endl;
}