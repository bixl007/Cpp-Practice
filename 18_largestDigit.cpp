#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int digit, max = 0;
    while (n)
    {
        digit = n % 10;
        if (digit > max)
        {
            max = digit;
        }
        n /= 10;
    }
    cout << "The greatest digit is: " << max << endl;
}